//Bài 4: Nh?p vào 2 s? nguyên duong a và b (a và b không trùng giá tr?). Hãy in ra màn hình s? nh? hon (không dùng c?u trúc if else ho?c toán t? 3 ngôi).
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	int i=50;
	if(i % 5==0){
		cout << " i chia het cho 5";
	}else if(i%2==0){
		cout << " i chia het cho 2";
	}else{
		cout << " i khong chia het cho 2 va 5";
	}
	return 0;	
}
