#include "BitcoinExchange.hpp"
#include "Exception.hpp"


BitcoinExchange::BitcoinExchange(std::string filecsv) 
{
    std::ifstream file(filecsv.c_str());
	if (!file)
		throw Exception::ErrorFile("Unable to open file!");
	file.seekg(0, std::ios::end);
	std::streampos fileSize = file.tellg();
	file.seekg(0, std::ios::beg);
	if (fileSize <= 0)
		throw Exception::ErrorFile("csv file is empty!");

	std::string line;
	while(std::getline(file, line)) 
	{
		std::stringstream ss(line);
		std::string key;
		std::string value;
        std::getline(ss, key, ',');
        std::getline(ss, value, ',');
		// csvmap に格納
        this->csvMap.insert(std::make_pair(key, atof(value.c_str())));
    }
}

void BitcoinExchange::readfileinput(std::string inputfile) 
{
	std::ifstream file(inputfile.c_str());
	if (!file)
		throw Exception::ErrorData("Unable to open file!");
	file.seekg(0, std::ios::end);
	std::streampos fileSize = file.tellg();
	file.seekg(0, std::ios::beg);
	if (fileSize <= 0)
		throw Exception::ErrorFile("input file is empty!");
	std::string line;
	struct tm tm;
	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string key;
		std::string value;
        std::getline(ss, key, '|');
        std::string date(key, 0, 10);
        if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) 
		{
            std::cout << "Error: bad input =>" << date << std::endl;
            continue;
        }

		std::getline(ss, value);
		if (atof(value.c_str()) < 0) 
		{
			std::cout << "Error: not a positive number =>" << value << std::endl;
			continue;
		}
		else if (atof(value.c_str()) > 1000) {
			std::cout << "Error: too large number. =>" << value << std::endl;
			continue;
		}
		//inputmapyに格納
		this->inputMap.insert(std::make_pair(date, atof(value.c_str())));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) 
{
	this->csvMap = src.csvMap;
	this->inputMap = src.inputMap;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src) {
	this->csvMap = src.csvMap;
	this->inputMap = src.inputMap;
	return (*this);
}

void BitcoinExchange::exec_input() {
	std::map<std::string, float>::iterator it_csv;
	std::multimap<std::string, float>::iterator it_input;
	for (it_input = this->inputMap.begin(); it_input != this->inputMap.end(); it_input++) 
	{
		for (it_csv = this->csvMap.begin(); it_csv != this->csvMap.end(); it_csv++) 
		{
			if (!it_input->first.compare(it_csv->first)) 
			{
				std::cout << it_input->first << " => " << it_input->second << " = " << it_input->second * it_csv->second << std::endl;
				break ;
			}
			else if (it_input->first.compare(it_csv->first) < 0)
			{
				std::map<std::string, float>::iterator itlow = this->csvMap.lower_bound(it_input->first);
				itlow--;
				std::cout << it_input->first << " => " << it_input->second << " = " << it_input->second * itlow->second << std::endl;
				break ;
			}
		}
	}
}










