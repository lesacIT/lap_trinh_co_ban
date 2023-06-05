#include <iostream>
#include <string>
using namespace std;

void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void update(int* &arr, int &size, int updated_index, int new_element);

int main()
{
	int n,y,x;
	input_integer("n= ",n);
	int *numbers=new int[n];
	cout << "nhap mang: ";
	input_array(numbers,n);
	
	input_integer("y= ",y);
	input_integer("x= ",x);
	
	update(numbers,n,x,y);
	cout << "mang sau khi them:";
	print_array(numbers, n);
	
	
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

void update(int* &arr, int &size, int updated_index, int new_element)
{
	//tao mang moi
	int new_size =size +1;
	int *tmp_arr=new int[new_size];
	//copy toan bo phan tu cu snag mang moi
	for(int i=0;i<size;i++){
		tmp_arr[i]=arr[i];
	}
	//them phan tu moi vao mang moi
	for(int i=new_size -1;i >updated_index;i--){
		tmp_arr[i]=tmp_arr[i-1];
	}
	tmp_arr[updated_index]=new_element;
	//gan mang moi cho con tro cu va tang size 1 don vi
	delete[] arr;
	arr =tmp_arr;
	
	size=new_size;
}






