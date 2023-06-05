#include <iostream>
#include <string>
using namespace std;

//Struct
struct Date{
	int date;
	int month;
	int year;
	Date(){
	}
	Date(int _date,int _month,int _year){
		date =_date;
		month=_month;
		year=_year;
	}
};
struct Student{
	//propertties
	string name;
	int age;
	Date dob;
	Student(){
		
	}
	//constructor
	Student(string _name,int _age,Date _dob){
		name=_name;
		age=_age;
		dob=_dob;
	}
	//methods
	void run(){
		cout <<name << " running..";
	}
	
};

int main()
{
	
	Student student_1("Long",18,Date(1,1,2000));
	
	
	cout << "Ten: " << student_1.name << endl;
	cout << "Tuoi: " << student_1.age << endl;
	cout << "Ngay sinh: " << student_1.dob.date<<"/"<< student_1.dob.month<<"/"<< student_1.dob.year<<endl ;
	student_1.run();
	
	return 0;
	
}








