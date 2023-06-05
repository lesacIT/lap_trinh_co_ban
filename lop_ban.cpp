#include <iostream >

using namespace std;

//lop ban -friend class

class B;

class A{
private:
	int x=4;
	
	friend B;
	
};
class B
{
public:
	void print_x(A a)
	{
		cout << a.x;
	}		
};

int main(){
	
	B b;
	b.print_x(A());
	
	return 0;
}
