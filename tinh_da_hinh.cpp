#include <iostream >

using namespace std;

/*
nap chong 
	nap chong ham
	nap chong toan tu
ghi de
phuong thuc ao	
*/
class Calculator{
public: 
	int x;
	
	Calculator(){
	}
	Calculator(int x){
		this->x = x;
	}
	int add(int a,int b){
		cout <<"integer"<<endl;
		return a+b;
	}
	
	float add(float a,float b){
		cout <<"Float"<<endl;
		return a+b;
	}
};
int main(){
	
	Calculator cal;
	
	int a=1,b=2;
	
	float c=1.4,d=1.5;
	
	cout <<"a+b = "<< cal.add(a,b) << endl;
	cout <<"c+d= "<<cal.add(c,d)<<endl;
	
	return 0;
}
