#include <iostream>
#include <set>

int main ()
{
 std::multiset<int> st{8, 4, 1, 4} ;
    // std::multiset<int>::iterator it = st.begin();
	auto it = st.end();
	std::cout << *it << std::endl;
	for (auto it = st.begin(); it != st.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	// for(auto itr = st.begin(); itr != st.end(); ++itr)
	//  {
    //     std::cout << *itr << "\n";      // イテレータの指す先のデータを表示
    // }    // イテレータの指す先のデータを表示
}