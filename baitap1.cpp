//Bài 2: Nh?p vào 1 ch? cái vi?t thu?ng b?t kì. Hãy in ra màn hình ch? cái dó du?i d?ng vi?t hoa.
#include <iostream>
using namespace std;
int main(){
	
	char c;
	
	cout << "chu cai viet thuong:";
	cin >> c;
	
	cout <<"chu cai viet hoa:" << (char)(c-32);
	return 0;
	
	
}
