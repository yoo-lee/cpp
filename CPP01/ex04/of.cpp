#include <fstream>
#include <iostream>
#include <cstdio>
 #include <string> 

int main(int argc, char **argv)
{
    std::string filename, filename_replace, s1, s2, aux;
	std::fstream filein, fileout;
	int			i, j;
	char        c;
    filename = argv[1];
	filename_replace = filename;
    filename_replace.append(".replace");
	s1 = argv[2];
	s2 = argv[3];

      // filenameのファイルを開き、ファイルを扱うための変数ifsを返す
    std::ifstream ifs("filename");
    // ファイルが開けたか確認
    if (ifs.fail())
    {
        std::cout << "Failed to open file" << std::endl;
    }
    std::string line;
    // ファイルから1行読み取る
    std::getline(ifs, line);
    // 読み込んだ行を標準出力に出力する
    std::cout << line << std::endl;    
        
    // filenameのファイルを開き、ファイルを扱うための変数ofsを返す
    std::ofstream ofs("text.txt");
    // ファイルが開けたか確認
    if (ofs.fail())
    {
        std::cout << "Failed to open file" << std::endl;
    }
    // filenameに "Hello ofstream!" と書き込む
    ofs << "chimo" << std::endl;
    // ofs << "Hello ofstream!" << std::endl;
    size_t		pos;
	size_t		rPos;
	size_t		rSize = s2.length();
	while (std::getline(filein, s1))
	{
		rPos = 0;
		while (true)
		{
			pos = s1.find(argv[2], rPos);
			if (pos == std::string::npos)
			{
				fileout << s1.substr(rPos, line.length() - rPos) << '\n';
				break;
			}
			fileout << line.substr(rPos, pos - rPos) << argv[3];
			rPos = pos + rSize;
		}
	}
	filein.close();
	fileout.close();
	return (0);
}
