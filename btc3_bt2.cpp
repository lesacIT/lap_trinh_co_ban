#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	float deg_f;
	
	cout << "F = ";
	cin >> deg_f;
	
	float deg_c=(deg_f-32)/1.8;
	
	cout << "C =" << deg_c;
	
    
	return 0;
}
