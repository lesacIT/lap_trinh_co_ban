#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,m,matrix1[10][10],matrix2[10][10];
	
	cout << "n= ";
	cin >> n;
	
	cout << "m= ";
	cin >> m;
	
	cout << "nhap ma tran 1: " <<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> matrix1[i][j];
		}
	}
	cout << "nhap ma tran 2: " <<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> matrix2[i][j];
		}
	}
	cout << "tong 2 ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << matrix1[i][j]+matrix2[i][j] <<" ";
		}
		cout <<endl;
	}
	
	return 0;
}
