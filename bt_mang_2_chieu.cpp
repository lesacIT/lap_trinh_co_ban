/*B�i 1: Vi?t chuong tr�nh nh?p v�o 2 s? nguy�n duong n v� m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a c�c s? nguy�n c� n h�ng v� m c?t. T�nh v� in ra m�n h�nh t?ng c�c ph?n t? c� trong m?ng.
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
