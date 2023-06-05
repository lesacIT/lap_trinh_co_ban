#include <iostream >
#include <vector>
using namespace std;

//lop ban -friend class


int main(){
	
	vector<int> numbers;
	
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	
	for(int i=0;i<numbers.size();i++){
		cout << numbers[i]<< " ";
	}
	
	cout << endl;
	
	numbers.erase(numbers.begin() + 1);
	
	for(int i=0;i<numbers.size();i++){
		cout << numbers[i]<< " ";
	}
	
	cout << endl;
	
	return 0;
}
