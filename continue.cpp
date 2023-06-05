#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
//	for(int i=1;i<=10;i++){	
//		if(i==5){
//			continue;
//		}
//		std::cout << i << endl;
//	}
	
	int i=1;
	while(i<=10){
		if(i==5){
			i++;
			continue;
		}
		std::cout << i << endl;
		i++;
	}
	
	
	
	
	return 0;
}
