/*Bài 1: Vi?t chuong trình nh?p vào 2 s? nguyên duong n và m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a các s? nguyên có n hàng và m c?t. Tính và in ra màn hình t?ng các ph?n t? có trong m?ng.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n, arr[10];
	
	cout << "n= ";
	cin >> n;
	
	cout <<"Nhap mang: ";
	for(int i=0;i<n;i++){
		cin >> arr[i];
		
	}
	int max = arr[0];
	
	for(int i=1;i <n;i++){
		if(arr[i]> max){
			max=arr[i];
		}
	}
	
	cout << "Gia tri lon nhat la:" << max;
	return 0;
}
