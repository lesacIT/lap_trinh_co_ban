//B�i 4: Nh?p v�o 2 s? nguy�n duong a v� b (a v� b kh�ng tr�ng gi� tr?). H�y in ra m�n h�nh s? nh? hon (kh�ng d�ng c?u tr�c if else ho?c to�n t? 3 ng�i).
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
