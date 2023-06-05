#include <iostream>

using namespace std;

// con tro -pointer
void input_interger(int *n){
	cin >> *n;
}
int main()
{
	int n=4;
	
	input_interger(&n);
	
	cout << "n= "<< n;
	return 0;
	
}






