#include <iostream>

using namespace std;


int main()
{
	float *a= new float(5.6); //x
	
	delete a;
	
	a=new float (3.4);//y
		delete a;
	a=new float(1.2);//z
	
	return 0;
	
}






