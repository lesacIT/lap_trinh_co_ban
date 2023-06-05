/*Bài 1: Vi?t chuong trình nh?p vào 2 s? nguyên duong n và m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a các s? nguyên có n hàng và m c?t. Tính và in ra màn hình t?ng các ph?n t? có trong m?ng.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n,m,arr[10][10];
	
	cout <<"n= ";
	cin >> n;
	cout << "m= ";
	cin >>m;
	
	cout << "Nhap mang: "<< endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}
	
	int sum =0;
	for(int i=0;i<n;i++){
		for(int j;i<m;j++){
			sum +=arr[i][j];
		}
	}
	
	cout << "tong cac phan tu trong mang la: " << sum;
	return 0;
}
