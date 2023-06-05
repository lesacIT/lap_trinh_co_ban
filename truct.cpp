#include <iostream>
#include <string>
using namespace std;

//Struct

struct Student{
	//propertties
	string name;
	int age;
	//constrictor
	Student(){
		name="Long";
		age=18;
		
	}
	//methods
	void run(){
		cout << " running..";
	}
	
};

int main()
{
	
	Student student_1;
	cout <<" nhap ten: ";
	getline(cin, student_1.name);
	
	cout << "nhap tuoi: ";
	cin >> student_1.age;
	
	cout << "Ten: " << student_1.name << endl;
	cout << "Tuoi: " << student_1.age << endl;
	
	student_1.run();
	
	return 0;
	
}








