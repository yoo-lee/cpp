#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main()
{
    st
	// 現状保存
	std::ios::fmtflags curret_flag = std::cout.flags();

	//123の頭に5個0を詰めて8桁にする
	std::ostringstream ss;
	ss << std::setw(8) << std::setfill('0') << 123 << "\n";
	std::string s(ss.str());
	std::cout << s;

	// 戻し
	std::cout.flags(curret_flag);
	return 0;
}
