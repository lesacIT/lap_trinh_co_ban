/*B�i 3: Vi?t chuong tr�nh nh?p v�o
 2 s? nguy�n duong n v� m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a c�c s? nguy�n c� n h�ng v� m c?t. In ra m�n h�nh c�c ph?n t? l?n nh?t c?a c�c h�ng. nguy�n duong n v� m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a c�c s? nguy�n c� n h�ng v� m c?t. T�nh v� in ra m�n h�nh t?ng c�c ph?n t? c� trong m?ng.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n,m, arr[10][10];
	
	cout << "n= ";
	cin >> n;
	cout << "m= ";
	cin >> m;
	
	cout <<"Nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}	
	}
	
	cout << "Cac phan tu lon nhat la: "<< endl;
	for(int i=0;i <n;i++){
		int max = arr[i][0];
		for(int j=0;j<m;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
		cout << max << " ";
	}
	return 0;
}
