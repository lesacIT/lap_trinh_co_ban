#include <iostream >

using namespace std;

class Cat{

private:
	string name;
	int age;
public:
	cat(){
	}
	Cat(string name,int age){
		this->name= name;
		this->age= age;
	}
	string get_name(){
		return this->name;
	}
	int get_age(){
		return this->age;
	}
};

int main(){
	
	Cat *cat=new Cat("Bo",2);
	
	cout <<"name: "<<cat->get_name() <<endl;
	cout <<"Age: "<<cat->get_age() <<endl;
	
	return 0;
}
