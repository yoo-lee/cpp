void printmap(int date, int rate)
{
	std::map<std::string, double>::const_iterator it;
	for (it = map.begin(); it = map.end(); ++it){
	std::cout << it ->first << "=" << it -> second << " ";
	}
	std::cout << std::endl;
}