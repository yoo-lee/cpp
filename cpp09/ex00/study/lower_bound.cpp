#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    
    // 要素を追加
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[4] = "Orange";
    
    // lower_bound を使ってキーが 3 以下の要素を探す
    int key = 3;
    auto it = myMap.lower_bound(key);
	auto it2 = myMap.upper_bound(key);

    if (it != myMap.begin()) 
	{
        // lower_bound が先頭イテレータでない場合、一つ前の要素がキーが 3 以下の最大の要素
        --it;
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    } else 
	{
        std::cout << "No element found with key less than or equal to " << key << std::endl;
    }
    
	if (it2 != myMap.begin())
	{
        std::cout << "Key: " << it2->first << ", Value: " << it2->second << std::endl;

	}else
	{
        std::cout << "No element found with key less than or equal to " << key << std::endl;
    }




    return 0;
}

