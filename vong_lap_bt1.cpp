#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n;
	
	cout <<"S = ";
	cin >> n;
	
	int s=0;
	for(int i=1; i<=n;i++){
//		s+=(i*i);
		s+=pow(i,2);
	}
	cout << "S= "<<s;
	return 0;
}
