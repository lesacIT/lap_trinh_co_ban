#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
	
	string str;
	
	cout << "nhap chuoi: ";
	getline(cin,str);
	
	//xoa khoang trang dau chuoi
	while(str[0]==' '){
		str.erase(0,1);
	}
	//coa khoang trang cuoi chuoi
	while(str[str.length()-1]==' '){
		str.erase(str.length()-1,1);
	}
	
	cout << "ket qua: " <<str;
}
