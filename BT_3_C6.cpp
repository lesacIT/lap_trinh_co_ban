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
	long long result=1;
	for(int i=1;i<=n;i++){
		result *=i;
	}
	return result;
}




