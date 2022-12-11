#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin(filename); 
    std::ofstream fout(filename + ".replace"); 
  ifstream fin("sample.txt"); // 읽을 파일을 fin 스트림객체와 연결한다.
  std::string line;
  while (!fin.eof())
  {
    fin >> line; // >> 연산자는 white space나 '\n'을 기준으로 읽는다.
    std::cout << line << std::endl;
  }
  return (0);
}