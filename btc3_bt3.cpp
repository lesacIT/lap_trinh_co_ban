#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n;
	
	cout << "n = ";
	cin >> n;
	
	bool is_nt=true;
	for(int i=2;i<n-1;i++){
		if(n%i==0){
			is_nt=false;
			break;
		}
	}
	if(is_nt){
		cout <<" n la so nguyen to";
	}else{
		cout <<" n khong phai la so nguyen to";
	}
    
	return 0;
}
