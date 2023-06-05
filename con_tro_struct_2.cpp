#include <iostream>
#include <string>
using namespace std;

//Nap chong toan tu - operator overloading

struct Point
{
	int x;
	int y;
	
	friend istream& operator>>(istream &is, Point &p)
	{
		cout << "x= ";
		is >> p.x;
		cout << "y= ";
		is >>p.y;
		
		return is;
	}
	friend ostream& operator<<(ostream &os,Point p){
		os << p.x<<" "<<p.y;
		
		return os;
	}
	
	friend Point operator+(Point p1,Point p2)
	{
		Point p3;
		p3.x=p1.x+p2.x;
		p3.y=p1.y+p2.y;
		
		return p3;
	}
};

int main()
{
	Point p1,p2;
	
	cout <<"nhap p1: "<<endl;
	cin >> p1;
	
	cout <<"nhap p2: "<<endl;
	cin >> p2;
	
	Point p3=p1+p2;
	
	cout <<"p1+p2= "<<p3;
	return 0;
	
}








