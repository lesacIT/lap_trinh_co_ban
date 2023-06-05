#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	float a,b;
	
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >>b;
    
    if(a==0 && b==0){
    	cout << "phuong trinh co vo so nghiem";	
	}else if(a==0 && b!=0){
		cout << "phuong trinh vo nghiem";
	}else if(a!=0){
		cout << "nghiem cua phuong trinh la " << -b/a;
	}
	return 0;
}
