#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_interger(string label,int &x){
	cout << label;
	cin >> x;
}
int main()
{
	int n=5;
	input_interger("nhap n: ",n);
	cout << "gia tri vua nhap: "<<n;
	return 0;
	
}
