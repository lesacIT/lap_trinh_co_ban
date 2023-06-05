#include <iostream>
#include <string>
using namespace std;

//Struct

struct Student
{
	//propertties
	string name;
	int age;
	
	Student(){
		
	}
	Student(string _name,int _age){
		name=_name;
		age=_age;
	}
};

int main()
{
	
	Student student("Long",21);
	Student *student_ptr=&student;
	
	cout << student_ptr->name;
	return 0;
	
}








