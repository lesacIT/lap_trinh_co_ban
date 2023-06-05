#include <iostream>
#include <string>
using namespace std;

void print_message(string  message)
{
	cout <<" Message:" << message << endl;
}

// ham co gia tri tra ve
int sum(int a,int b){
	int c=a+b;
	cout <<" logic trong ham sum." << endl;
	return c;
	cout <<" logic trong ham sum." << endl;
}
int main()
{
	string c="hello cac ban";
	print_message(c);
	
	cout << sum(1,2);
	return 0;
	
}
