#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void function_a(int a,int b=1,int c=4){
	cout << "a= "<< a << endl;
	cout << "b= "<< b << endl;
	cout << "c= "<< c << endl;
}
int main()
{
	function_a(4,4);
	function_a(3);
	return 0;
	
}
