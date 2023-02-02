#include <iostream>
#include <set>

int main ()
{
	std::multiset<int> st{ 4, 1, 4} ;
    std::multiset<int>::iterator it = st.begin();
	std::multiset<int>::iterator a = st.end(); 
	// auto it = st.end();
	
	
	
	std::cout << *it << std::endl;
	std::cout << *a << std::endl;
	for (auto i = st.begin(); i != st.end(); ++i)
	{
		std::cout << *i <<std::endl;
	}
	// for (auto it = st.begin(); it != st.end(); ++it)
	// {
	// 	std::cout << *it << std::endl;
	// }
	// for(auto itr = st.begin(); itr != st.end(); ++itr)
	//  {
    //     std::cout << *itr << "\n";      // イテレータの指す先のデータを表示
    // }    // イテレータの指す先のデータを表示
}