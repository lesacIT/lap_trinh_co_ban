#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,k,arr[10];
	
	cout << "n= ";
	cin >> n;
	
	cout << "nhap mang: ";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout <<"k= ";
	cin >> k;
	
	int x=-1,y=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i !=j && (arr[i]+arr[j])==k){
				x=i;
				y=j;
				break;
			}
		}
		if(x!=-1 && y!=-1){
			break;
		}
	}
	if(x!=-1 && y!=-1){
		cout << "ket qua:"<< x <<" "<<y;
	}else{
		cout <<"khong co";
	}
	return 0;
}
