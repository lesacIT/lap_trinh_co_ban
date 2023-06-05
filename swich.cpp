//Bài 4: Nh?p vào 2 s? nguyên duong a và b (a và b không trùng giá tr?). Hãy in ra màn hình s? nh? hon (không dùng c?u trúc if else ho?c toán t? 3 ngôi).
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	int a,b;
	
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin>> b;
	
	int ket_qua=a<b? a:b;
	
	cout <<"gia tri nh hon la" <<ket_qua;
	
	return 0;	
}
