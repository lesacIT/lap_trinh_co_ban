#include <iostream>

using namespace std;

// con tro -pointer

int main()
{
	int n=4;
	
	int *i_ptr=&n;
	
	cout << &n<<endl;
	
	*i_ptr=6;
	cout << i_ptr<<endl;
	
	cout << *i_ptr;
	return 0;
	
}






