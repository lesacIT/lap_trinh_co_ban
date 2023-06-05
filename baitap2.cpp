//Bài 2: Nh?p vào 1 ch? cái vi?t thu?ng b?t kì. Hãy in ra màn hình ch? cái dó du?i d?ng vi?t hoa.
#include <iostream>
using namespace std;
int main(){
	
	int a,b;
	 cout << "a = "; //1
	 cin >> a;
	 cout <<"b = ";//2
	 cin >> b;
	 
	 int c=a;
	 
	 a=b;
	 b=c;
	 
	 
	 
	 cout << "Gia tri cua a la " <<a<< endl;
	 cout << "Gia tri cua b la " <<b<< endl;
	
	return 0;
	
	
}
