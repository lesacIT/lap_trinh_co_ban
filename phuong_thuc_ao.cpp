#include <iostream >

using namespace std;

/*
nap chong 
	nap chong ham
	nap chong toan tu
ghi de
phuong thuc ao	
*/

class Animal
{
public:
	virtual void move()
	{
	  cout<<"Animal move";
	}
};

class Dog:public Animal
{
public:
	void move(){
		cout <<" Dog move";
	}		
};

int main(){
	
	Animal *animal =new Dog;
	
	animal->move();
	return 0;
}
