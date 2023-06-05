#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int n;
	
	cout <<"S = ";
	cin >> n;
	
	unsigned long long s=1;
	for(int i=1; i<=n;i++)
	{
		s *=i;
	}
	cout << "n!= "<<s;
	return 0;
}
