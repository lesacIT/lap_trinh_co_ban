//B�i 4: Nh?p v�o 2 s? nguy�n duong a v� b (a v� b kh�ng tr�ng gi� tr?). H�y in ra m�n h�nh s? nh? hon (kh�ng d�ng c?u tr�c if else ho?c to�n t? 3 ng�i).
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
