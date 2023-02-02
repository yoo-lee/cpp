#include <iostream>
#include <vector>
using namespace std;
#define N 5


// template <typename T>
// T add(T a,T b){
//     return a + b;
// }

template <typename T>
void swap(T a,T b)
{
	T tmp;
	a = tmp;
	a = b;
	b = tmp;	
}

template <typename T>
int min(T a,T b)
{
	if(a > b)
	swap(a,b);	
}

int main ()
{
	int i;
	int j;
	std::vector v{1,2,3};
	for(i = 0; i < N; ++i)
	{
		v[i] = rand();
		cout << v[i] << endl;
	}

while(i < N)
{
	int j = i + 1;
	while(j < N)
	{
		if (v[i] < v[j])
		swap(v[i], v[j]);
	}
	j++;
}
i++;
}