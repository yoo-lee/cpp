#include <iostream>
#include <map>

double findRate(std::string date, std::map<std::string, double> data) {
    std::map<std::string, double>::iterator it = data.find(date);
    if (it != data.end()) {
        return it->second;
    } else {
        std::string previousDay = moveDateBackOneDay(date);
        if (previousDay.compare("not valid date")) return 0;
        return findRate(previousDay, data);
    }
}

double findRate(std::string date, std::map<std::string, double> data)
{
	if (it != data.end()){
		return it-> second;
	} else {
		std sring prev = moveDateBackone o
	}
}
// このコードは、与えられた日付に対応するビットコインの為替レートを返すために、与えられたデータのstd::mapを検索する関数findRateを定義しています。

// 関数は、まずdataの中からdateをキーとして検索し、
// 見つかった場合はその値を返します。もし見つからなかった場合は、
// 前日の日付を取得し、再帰的にfindRateを呼び出します。
// もし前日が無効な日付であった場合、0を返します。

// 注意点としては、previousDay.compare("not valid date")が正しい比較ではない
// ことです。この比較は、compare関数が0を返す場合に真となりますが、
// これは無効な日付を表す文字列に限定されるわけではありません。正しくは、isValidDate(previousDay)
// // を呼び出して、前日が有効な日付であることを確認する必要があります。
int main() {
    std::map<std::string, double> data = {{"2022-01-01", 1.0}, {"2022-01-02", 2.0}, {"2022-01-03", 3.0}};
    std::string date = "2022-01-04";
    double rate = findRate(date, data);
    std::cout << "Rate for " << date << " is " << rate << std::endl;
    return 0;
}