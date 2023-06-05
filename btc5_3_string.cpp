#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main(){
	
	string str;
	
	cout << "nhap chuoi: ";
	getline(cin, str );
	
	//chuyen cac ki tu thanh chu thuong
	for(int i=0;i<str.length();i++){
//		if(str[i]>=65 && str[i]<=90){
//			str[i]=str[i]+32;
//		}
//	s? dùng ham co san
	 str[i]=tolower(str[i]);
	}
	
//	chuyen ky tu dau tien thanh chu hoa
	if(str[0]!=' '){
		str[0]=toupper(str[0]);
	}
	for(int i=0;i<str.length();i++){
		if(str[i]==' ' && str[i+1]!=' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	
	
	cout <<"ket qua: "<< str;
	
	return 0;
	
}
