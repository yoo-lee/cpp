#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
    std::ofstream writing_file;
    std::string filename = "text.txt";
    writing_file.open(filename, std::ios::out);
    std::string writing_text = "C++（シープラスプラス）は、汎用プログラミング言語のひとつである。";
    writing_file << writing_text << std::endl;
    writing_file.close();
    return 0;
}

    ofstream file;
    string file_name = "text.txt";
    file.open(file_name, ios::out);
    