#include <iostream>

using namespace std;
/*
- tinh dong goi
- tinh ke thua
- tinh da hinh
- tinh truu tuong

*/

class Square
{
private:	
	float side_length;

public:
	void set_side_length(float _side_length)
	{
		side_length=_side_length;
	{
	float get_side_length()
	{
		return side_length;
	}	
};


int main()
{
	Square s1;
	
	s1.set_side_lenght(1.3);
	
	cout <<"side lenght:" << s1.get_side_lenght<<endl;
	return 0;
}
