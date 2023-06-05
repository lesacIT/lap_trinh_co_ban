#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float avg(int arr[2][3],int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum +=arr[i][j];
		}
	}
	return (float) sum /(n*m);
}
int main()
{
	int number[2][3]={
		{1,2,3},
		{4,5,6}
	};
	cout << avg(number,2,3);
	return 0;
	
}
