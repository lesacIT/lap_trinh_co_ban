#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,m,arr[10][10];
	
	cout << "n= ";
	cin >>n;
	
	cout << "m= ";
	cin >>m;
	
	cout << "nhap ma tran: "<< endl;
	for(int  i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >>arr[i][j];
		}
	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]%2==1){
				sum += arr[i][j];
			}
		}
	}
	cout <<"tong cac phan tu le la:"<<sum;
	return 0;
}
