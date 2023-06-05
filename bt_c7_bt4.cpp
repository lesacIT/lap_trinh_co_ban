#include <iostream>
#include <string>
using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void sort(int *arr,int size);


int main()
{
	int n,y,x;
	input_integer("n= ",n);
	int *numbers=new int[n];
	cout << "nhap mang: ";
	input_array(numbers,n);
	

	sort(numbers, n);
	cout << "mang sau khi sap xep";
	print_array(numbers,n);
	return 0;
	
}

void input_integer(string label, int &n){
	cout << label;
	cin >> n;
}
void input_array(int *arr, int size){
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
}
void print_array(int *arr, int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
}

void sort(int *arr,int size){
	for(int i = size - 1;i>0;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1] =tmp;
			}
		}
	}
}






