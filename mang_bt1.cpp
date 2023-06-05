#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	//<kieu_du_lieu><ten_mang>[so_luong_phan_tu]
	int numbers[20];
	int n,x;
	cout << "n= ";
	cin >>n;
	

	
	cout <<"nhap mang: ";
	for(int i=0;i<n;i++)
	{
		cin >> numbers[i];	
	}
	cout << "x= ";
	cin >> x;
	for(int i = x;i < n - 1 ;i++)
	{
		numbers[i]=numbers[i + 1];
		
	}
	n--;
	
	cout <<"mang sau khi xoa:";
	for(int i = 0;i < n; i++){
		cout << numbers[i] << " ";
	}
	return 0;
}
