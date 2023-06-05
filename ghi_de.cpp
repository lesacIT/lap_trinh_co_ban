#include <iostream >

using namespace std;

/*
nap chong 
	nap chong ham
	nap chong toan tu
ghi de
phuong thuc ao	
*/

class Animal{
public: 
	void move(){
		cout <<"Animal move" << endl;
	}
	
};

class Dog:public Animal
{
public: 
	void move()
	{
		cout <<" Dog move "<< endl;
	}
	void parent_move(){
		Animal::move();
	}
};

int main(){
	
	Animal animal;
	animal.move();
	
	Dog dog;
	dog.move();
	dog.parent_move();
	return 0;
}
