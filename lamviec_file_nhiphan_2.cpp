#include <iostream>
#include <fstream>

using namespace std;



int main(){
	
	ofstream ofs;
	
	ofs.open("test.bin",ios::binary);
	
	if(!ofs.is_open()){
		cout << "mo file that bai.";
		return 1;
	}
	
	int n=3;
	float numbers[n]={1.2,2.4,3.4};
	
	ofs.write((char*)&n,sizeof(int));
	ofs.write((char*)&numbers,sizeof(float)*n);
	
	ofs.close();
	
	//doc file
	ifstream ifs;
	ifs.open("test.bin",ios::binary);
	
	int read_n;
	ifs.read((char*)&read_n,sizeof(int));
	float read_numbers[read_n];
	ifs.read((char*)&read_numbers,sizeof(float)*read_n);
	
	for(int i=0;i<read_n;i++){
		cout << read_numbers[i]<< " ";
	}
	return 0;
}
