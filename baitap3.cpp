//Bài 4: Nh?p vào 2 s? nguyên duong a và b (a và b không trùng giá tr?). Hãy in ra màn hình s? nh? hon (không dùng c?u trúc if else ho?c toán t? 3 ngôi).
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	int a,b;
	 cout << "a = "; //1
	 cin >> a;
	 cout <<"b = ";//2
	 cin >> b;
	 
	int tong =a+b;
	int hieu = abs(a-b); 
	 
	 
	 cout << "Gia tri nho hon la " <<(tong-hieu)/2<< endl;
	 
	
	return 0;
	
	
}
