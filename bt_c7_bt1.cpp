#include <iostream>
#include <string>
using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int*&arr, int &size, int new_element);
int main()
{
	int n,x;
	input_integer("n= ",n);
	int *numbers=new int[n];
	cout << "nhap mang: ";
	input_array(numbers,n);
	
	input_integer("x= ",x);
	push(numbers,n,x);
	cout <<" mang sau khi them: ";
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
void push(int* &arr, int &size, int new_element){
	//tao 1 mang moi
	int new_size=size + 1;
	int *tmp_arr=new int[new_size];
	//copy toan bo phan tu cu sang mang moi
	for(int i=0;i<size;i++){
		tmp_arr[i]=arr[i];
	}
	//them phan tu moi vao cuoi mang moi
	tmp_arr[new_size - 1] = new_element;
	//gan mang moi sang con tro cu va tang size len 1 don vi
	delete[] arr;
	arr=tmp_arr;
	size=new_size;
}





