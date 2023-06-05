#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int s(int n)
{
	if(n==1){
		return 1;
	}
	return n+s(n-1);
}

long long factor(int n){
	if(n==1){
		return 1;
	}
	return n*s(n-1);
}

int main()
{
	int n=3;
	cout << s(n) << endl;
	cout <<factor(n);
	return 0;
	
}
