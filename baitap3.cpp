//B�i 4: Nh?p v�o 2 s? nguy�n duong a v� b (a v� b kh�ng tr�ng gi� tr?). H�y in ra m�n h�nh s? nh? hon (kh�ng d�ng c?u tr�c if else ho?c to�n t? 3 ng�i).
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
