#include <iostream>
#include <string>

using namespace std;
// class,object

class Person
{
	public:
		//properties
		string name;
		int age;
		string address;
		//constructor
		Person(){
			
		}
		Person(string _name, int _age,string _address){
			name=_name;
			age=_age;
			address=_address;
		}
		//methods
		void work(){
			cout <<name<<" is working";
		}
private: //rieng tu	

};

int main(){
	Person person1("nguyen van a",28,"ha noi");
	
//	person1.name="nguyen van a";
//	person1.age=28;
//	person1.address="ha noi";
	
	cout << "Name: "<< person1.name<<endl;
	cout << "Tuoi: "<< person1.age<<endl;
	cout << "Dia chi: "<< person1.address<<endl;
	
	person1.work();
	return 0;
}
