#include <iostream>
#include <vector>

int main ()
{
	// int a[] = {1, 2, 3};
	std::vec <int> a= {1, 2, 3};
		a.push_back(4);
	for( int i :a){
	std::cout << i << " ";
}
return 0;
}