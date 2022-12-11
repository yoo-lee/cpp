// Create a program that takes three parameters
// in the following order: a filename and
// two strings, s1 and s2.
// It will open the file <filename> and copies its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!
// Of course, handle unexpected inputs and errors. You have to create and turn in your
// own tests to ensure your program works as expected.
#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char ** av)
{
std::string filename, filename_replace, s1, s2;
std::string filename = av[1];
std::cout << av[1] << std::endl;
std::string line;
std::fstream filein, fileout;
filename_replace.append(".replace");
s1 = av[2];
s1 = av[3];

filein.open(filename);
// std::getline(filename ,line);
	// std::ofstream outputFile;
while 




std::string pos;
std::string rPos;

while (std::getline(file, line))
	{
		rPos = 0;
		while (true)
		{
			pos = line.find(argv[2], rPos);
			if (pos == std::string::npos)
			{
				outputFile << line.substr(rPos, line.length() - rPos) << '\n';
				break;
			}
			outputFile << line.substr(rPos, pos - rPos) << argv[3];
			rPos = pos + rSize;
		}
	}
}

// fail to be import 
// output the file
