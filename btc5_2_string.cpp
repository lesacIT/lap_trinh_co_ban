#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main(){
	
	string str;
	
	cout << "nhap chuoi: ";
	getline(cin,str);
	
	int i=0;
	while(i<str.length())
	{
		if(str[i]==' '&& str[i+1]==' '){
			str.erase(i,1);
				
		}else{
			i++;
		}
	}
	cout <<"Ket qua: "<< str;
}
