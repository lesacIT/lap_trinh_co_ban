#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int sum(int a,int b);
void print_value(int value);

int sum(int a,int b){
	return a+b;
}
void print_value(int value){
	cout << "Value: " << value << endl;
}

int main()
{
	print_value(sum(1,2));
	return 0;
	
}
