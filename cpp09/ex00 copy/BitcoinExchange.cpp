#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filecsv) 
{
    std::ifstream file(filecsv.c_str());
	if (!file)
		throw Exception::ErrorFile("Unable to open file!");
	std::string line;
	while(std::getline(file, line)) 
	{
		std::stringstream ss(line);
		std::string key;
		std::string value;
		// std::getline 関数を使って、ss ストリームから , 区切りの文字列を取得するコード例を以下に示します。
        std::getline(ss, key, ',');
        std::getline(ss, value, ',');
        this->csvMap.insert(std::make_pair(key, atof(value.c_str())));
    }
}

void BitcoinExchange::readfileinput(std::string inputfile) {
	std::ifstream file(inputfile.c_str());
	if (!file)
		throw Exception::ErrorData("Unable to open file!");
	std::string line;
	struct tm tm;
	while (std::getline(file, line)) {
		std::stringstream ss(line);
		std::string key;
		std::string value;
        std::getline(ss, key, '|');
        std::string date(key, 0, 10);
        if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
            std::cout << "Error: bad input =>" << date << std::endl;
            continue;
        }
		std::getline(ss, value);
		if (atof(value.c_str()) < 0) {
			std::cout << "Error: not a positive number" << std::endl;
			continue;
		}
		else if (atof(value.c_str()) > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
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


// このexec_input()関数は、inputMapとcsvMapという2つのマップを比較して計算を行います。
// 以下は、その処理の詳細な説明です。

// 外側のループでは、inputMapの要素を順に取り出します。it_inputはinputMapのイテレータです。
// 内側のループでは、csvMapの要素を順に取り出します。it_csvはcsvMapのイテレータです。
// イテレータが指す要素のキー（first）を比較して、一致するかどうかを確認します。
// もし一致する場合、対応する値（second）を掛け算して結果を表示します。
// 一致しない場合、キーの順序を比較し、挿入位置を見つけます。lower_bound()関数を使用して、it_input->firstより大きいまたは等しい最初の要素のイテレータを取得します。その後、そのイテレータの前の要素を取得して、計算と結果の表示を行います。
// 内側のループが終了すると、外側のループに戻り、次の要素を処理します。
// 最終的な結果は、一致するキーの場合と挿入位置の前のキーの場合に表示されます。
// この関数は、inputMapとcsvMapの要素を比較して計算を行い、結果を表示するものです。
void BitcoinExchange::exec_input() {
	std::map<std::string, float>::iterator it_csv;
	std::multimap<std::string, float>::iterator it_input;
	// for (it_input = this->inputMap.begin(); it_input != this->inputMap.end(); it_input++) 
	for (const auto& inputPair : this->inputmap)
	{
		for (const auto& csvPair : this->csvmap)
		{
			if (!it_input->first.compare(it_csv->first)) 
			{
				std::cout << it_input->first << " => " << it_input->second << " = " << it_input->second * it_csv->second << std::endl;
				break ;
			}
			else if (it_input->first.compare(it_csv->first) < 0)
			{
				std::map<std::string, float>::iterator itlow = this->csvmap.lower_bound(it_input->first);
				itlow--;
				std::cout << it_input->first << " => " << it_input->second << " = " << it_input->second * itlow->second << std::endl;
				break ;
			}
		}
	}
}