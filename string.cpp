#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
	string str;
	int n;
	cout <<"nhap chuoi: ";
	cin >>str;  // chi nhap ko bam space
	
	cout <<"nhap n:";
	cin >>n;
//=> khi nhap thì ko su dung getline
//	can phai sd 
	cin.ignore();
	getline(cin, str);
	
	
	cout <<"chuoi vua nhap"<<endl;
	cout << str;
	return 0;
}
