#include <iostream>
#include <fstream>

using namespace std;



int main(){
	
	fstream fs;
	
	fs.open("test.txt",ios::in);
	string name;
	
	getline(fs, name);
	
	cout << name;
	
	return 0;
}
