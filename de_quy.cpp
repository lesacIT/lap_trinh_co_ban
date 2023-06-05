#include <iostream>
#include <string>
#include <math.h>
using namespace std;


void print_value(int value){
	
	cout << "Value: " << value << endl;
	if(value ==1){
		return ;
	}
	print_value(value-1);
}

int main()
{
	print_value(3);
	return 0;
	
}
