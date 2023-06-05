#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void kiem_tra_so_nt(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout << n << " khong phai so nguyen to." <<endl;
			return;
		}
	}
	cout << n << " la so nguyen to." << endl;
	return;
}
int main()
{
	int x=3;
	int y=4;
	kiem_tra_so_nt(x);
	kiem_tra_so_nt(y);
	return 0;
	
}
