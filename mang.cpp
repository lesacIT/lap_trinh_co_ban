#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	//<kieu_du_lieu><ten_mang>[so_luong_phan_tu]
	int number[20];
	int n,x;
	cout << "n= ";
	cin >>n;
	
	cout << "nhap mang: ";
	for(int i=0;i <n ;i++){
		cin >> number[i];
	}
	cout << "x= ";
	cin >> x;
	
	number[n] =x;
	n++;
	
	cout << "mang sau khi them:";
	for(int i=0;i<n;i++){
		cout << number[i] << " ";
	}
	return 0;
}
