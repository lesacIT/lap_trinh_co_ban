#include <iostream >

using namespace std;

class Animal //class cha
{ 
public:
	float weight;
	
	void run(){
		cout <<"Anmial is running..." <<endl;
	}
};

class Cat: public Animal //class con
{
public:
	string name;
	
	void eat(){
		cout <<"Cat is eating..." <<endl;
	}
};

int main(){
	
	Cat cat;
	
	cat.weight=30;
	cat.name="Bo";
	
	cout << "Name: "<<cat.name <<endl;
	cout << "Weight: "<<cat.weight <<endl;
	
	cat.run();
	return 0;
}
