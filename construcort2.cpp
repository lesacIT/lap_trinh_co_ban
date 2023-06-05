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
	void print(){
		cout << "Ten: "	<< name<<",tuoi: "<<age;
		cout <<",ngay sinh: "<< dob.date<<"/"<< dob.month<<"/"<< dob.year<<endl;
	}
	
};

int main()
{
	
	Student students[3]={
		Student("Long",18,Date(1,2,2000)),
		Student("Tuan",18,Date(1,2,2000)),
		Student("Nam",18,Date(1,2,2000)),
	};
	for(int i=0;i<3;i++){
		students[i].print();
	}
	return 0;
	
}








