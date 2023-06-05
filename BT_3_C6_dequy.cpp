#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void intput_integer(string label, int &n);
long long factor(int n);
int main()
{
	int n;
	intput_integer("n= ",n);
	cout <<n<< "!= " << factor(n);
	return 0;
	
}

void intput_integer(string label, int &n){
	cout << label;
	cin >> n;
}

long long factor(int n){
	if(n==1){
		return 1;
	}
	return n*factor(n-1);
	
}




