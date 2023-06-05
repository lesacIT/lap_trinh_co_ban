#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	//<kieu_du_lieu><ten_mang>[so_luong_phan_tu]
	int number[5];
	
	for(int i=0;i<=5;i++){
		cout << "number["<< i <<"]=";
		cin >> number[i];
	}
	for(int i=0;i<5;i++){
		cout << "number[" << i << "] =" << number[i] << endl; 
	}
	return 0;
}
