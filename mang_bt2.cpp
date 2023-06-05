#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	//<kieu_du_lieu><ten_mang>[so_luong_phan_tu]
	const int SO_HANG =2;
	const int SO_COT =3;
	
	int arr[SO_HANG][SO_COT]={
		{1,2,3},
		{4,5,6}
	};
	
//	nhap mang 2 chieu
	for(int i=0;i<SO_HANG;i++){
		for(int j=0;j<SO_COT;j++){
			cout << "arr["<<i<<"]["<< j<<"]=";
			cin >> arr[i][j];
		}
	}
//	xuat hang
	for(int i=0;i<SO_HANG;i++){
		for(int j=0;j<SO_COT;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
