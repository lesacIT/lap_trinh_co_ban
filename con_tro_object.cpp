#include <iostream >

using namespace std;

class Cat{

private:
	string name;
	int age;
public:
	Cat(string _name,int _age){
		name= _name;
		age= _age;
	}
	string get_name(){
		return name;
	}
	int get_age(){
		return age;
	}
};

int main(){
	
	Cat cat("Bo",2);
	
	cout <<"name:"<<cat.get_name()<<endl;
	cout <<"Age:"<<cat.get_age()<<endl;
	
	return 0;
}
