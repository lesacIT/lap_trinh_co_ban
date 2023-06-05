#include <iostream >

using namespace std;



class Animal//Abstract class
{
public:
	virtual void make_sound()=0;
	virtual void move()=0;
};

class Cat: public Animal
{
public: 
	void make_sound()
	{
		cout <<" Cat make sound" <<endl;
	}
	void move(){
		cout <<" cat move"<<endl;
	}
};

class Dog: public Animal
{
public: 
	void make_sound()
	{
		cout <<" Dog make sound" <<endl;
	}
	void move(){
		cout <<" Dog move"<<endl;
	}
};

 

int main(){
	
	Dog dog;
	Cat cat;
	
	dog.make_sound();
	dog.move();
	
	cat.make_sound();
	cat.move();
	
	return 0;
}
