#include "BitcoinExchange.hpp"

std::map<std::string, double> readData() {
	std::map<std::string, double> _data;
	std::ifstream file("data.csv");
    std::string line;
    // Skip first line
    std::getline(file, line);
    // Read data from file and insert into map
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, rate;
        std::getline(ss, date, ',');
        std::getline(ss, rate, ',');
        _data[date] = std::stod(rate);
    }
	return _data;
}

//パース
void checkInput(char *file, std::map<std::string, double> data) {
	// check if file exists
	std::ifstream inputFile(file);
    if (!inputFile) {
        std::cerr << "Error: Failed to open file." << std::endl;
        exit(1);
    }
	// check the first line
    std::string firstLine;
    std::getline(inputFile, firstLine);
    if (firstLine.compare("date | value")) {
        std::cerr << "Error: First line of file is not 'date | value'." << std::endl;
        exit(1);
    }
    // Parse the rest
    std::string line;
    // std::getline(inputFile, line);
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string date;
        std::string value;
        char seperator;
// issストリームから日付、区切り記号、値が正常に抽出されたかどうかを確認しています。この部分の意味は次の通りです：
// >>はつながっていてもよい
// iss >> date：issストリームから日付を抽出し、date変数に格納します。
// iss >> seperator：issストリームから区切り記号を抽出し、seperator変数に格納します。
// iss >> value：issストリームから値を抽出し、value変数に格納します。
        if(!(iss >> date >> seperator >> value) || seperator != '|')
			std::cout << "Error: bad input => " << date << std::endl;
		else if(!ifValidDate(date) || !ifValidValue(value))
			std::cout << "Error: bad input => " << date << std::endl;
		else if(stod(value) < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if(stod(value) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else if (stod(value) < 1000 || stod(value) > 0) {
			double mult = stod(value) * findRate(date, data);
			std::cout << date << " => " << value << " = " << mult << std::endl;
		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
    }
    inputFile.close();
}

// このコードは、指定された日付に対応するレート（倍率）を検索するための関数findRateです。以下にその詳細を説明します。
double findRate(std::string date, std::map<std::string, double> data) 
{
// dataというstd::mapコンテナ内で、指定されたdateと一致するキーを探します。
// data.find(date)は、dateをキーとして探索し、該当するイテレータを返します。
	std::map<std::string, double>::iterator it = data.find(date);
    // イテレータitがdata.end()でない場合、つまり指定された日付のレートが見つかった場合、そのレート（it->second）を返します。
	if (it != data.end()) 
	// end() とは最後の要素の次を指すイテレータつまり何もない、
	{
        return it->second;
    }
	 else 
	//  上記の条件が満たされない場合、指定された日付のレートが見つからなかったことを意味します。
	// moveDateBackOneDay関数を使用して、dateの前日を計算し、その日付をpreviousDayとして取得します
	{
        std::string previousDay = moveDateBackOneDay(date);
        if (previousDay.compare("not valid date"))
            return 0;
        return findRate(previousDay, data);
    }
}

std::string moveDateBackOneDay(const std::string& date) {
    int year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

    int prev_day = day - 1;
    int prev_month = month;
    int prev_year = year;

    if (prev_day == 0) {
        prev_month = month - 1;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year = year - 1;
            if (prev_year < 2009) {
                return "not valid date";
            }
        }

        if (prev_month == 2) {
            bool leap_year = ((prev_year % 4 == 0) && (prev_year % 100 != 0)) || (prev_year % 400 == 0);
            prev_day = leap_year ? 29 : 28;
			// もしleap_yearが真（true）であれば、prev_dayに29を代入します。
			// もしleap_yearが偽（false）であれば、prev_dayに28を代入します。
        } else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
            prev_day = 30;
        } else {
            prev_day = 31;
        }
    }

    std::string prev_date = std::to_string(prev_year) + "-";
    if (prev_month < 10)
        prev_date += "0" + std::to_string(prev_month);
    else
        prev_date += std::to_string(prev_month);
    if (prev_day < 10)
        prev_date += "-0" + std::to_string(prev_day);
    else
        prev_date += "-" + std::to_string(prev_day);

    return prev_date;
}


// すべてのチェックがパスした場合、関数は true を返し、入力文字列が有効な日付を表していることを示します。
bool ifValidDate(const std::string& date) {
// 関数はまず、入力文字列の長さをチェックします。
// もし長さが正確に10文字でない場合、無効な日付としてすぐに false を返します。
// "YYYY-MM-DD" が１０文字である為
    // Check that the input string has the correct length
    if (date.length() != 10) {
        return false;
    }
    // Check that the Year, Month, and Day components are valid integers
	// 次に、year、month、day、separator1、separator2 という変数を宣言します。
	// これらの変数は、日付の抽出されたコンポーネントを格納するために使用されます。

	// std::istringstream オブジェクト ss を作成し、入力文字列 date で初期化します。
	// 入力ストリーム抽出演算子 (>>) を使用して、ss から値を抽出し、対応する変数に格納します。
	// 期待される形式は year-separator1-month-separator2-day です。
	// 例えば、"2023-05-09" は year = 2023、separator1 = '-'、month = 05、separator2 = '-'、day = 09 
	// として解析されます。
	// 抽出後、日付のコンポーネントを検証するためにいくつかのチェックを行います：
	// 抽出が失敗したかどうか (ss.fail()) やセパレータが '-' でないかをチェックします。
    int year, month, day;
    char separator1, separator2;
    std::istringstream ss(date);
    ss >> year >> separator1 >> month >> separator2 >> day;
    if (ss.fail() || separator1 != '-' || separator2 != '-' ||
// 年が負の値であるか、月が1から12の範囲外であるか、日が1から31の範囲外であるかをチェックします。
        year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
// これらのいずれかの条件が満たされた場合、false を返します。
        return false;
    }

	// 抽出されたコンポーネントに基づいて、月と日の値に特定の条件を追加でチェックします。
	// 例えば、2月の場合にはうるう年であるかどうかを確認し、日数を適切に検証します。
	// また、4月、6月、9月、11月の場合には、日が30より大きいかどうかをチェックします。
    // Check that the Month and Day components are valid for the given Year
    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if ((month == 2 && (leap_year ? day > 29 : day > 28)) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
		std::cout << "idil" << std::endl;
	// これらのいずれかの条件が満たされた場合、false を返します。
        return false;
    }
    // The input string is a valid date in the Year-Month-Day format
    return true;
}

bool ifValidValue(const std::string& value) {
    // Check that the input string has the correct length
    try {
            std::stof(value);
        }
        catch (const std::invalid_argument& e) {
            // std::cout << e.what() << std::endl;
            return false;
        }
    return true;
}

void printMap(const std::map<std::string, double>& map) {
    std::map<std::string, double>::const_iterator it;
    for (it = map.begin(); it != map.end(); ++it) {
        std::cout << it->first << "=" << it->second << " ";
    }
    std::cout << std::endl;
}