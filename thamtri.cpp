#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_array(int arr[],int n){
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
}

int main()
{
	int numbers[10];
	
	input_array(numbers,4);
	for(int i=0;i<4;i++){
		cout << numbers[i] <<" ";
	}
	return 0;
	
}
