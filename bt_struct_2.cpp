#include <iostream>
#include <string>
using namespace std;

struct Product{
 	string name;
 	string price;
 	int quatity;
 	
 	friend istream& operator>>(istream &is, Product &product){
 		cout << "nhap ten: ";
 		is.ignore();
 		getline(is,product.name);
 		cout <<" nhap gia: ";
 		is >> product.price;
 		cout <<"nhap so luong: ";
 		is >> product.quatity;
 		
 		return is;
	 }
	 friend ostream& operator<<(ostream &os,Product product){
	 	os << "Ten: " << product.name;
	 	os <<",don gia: "<<product.price;
	 	os <<",so luong: "<<product.quatity;
	 	
	 	return os;
	 }
 	
};

int show_menu();
void print_product(Product *products, int size);
void add_product(Product* &products, int &size);
void delete_product(Product* &products, int &size);
int main()
{	
	int size = 0;
	Product *products =new Product[size];
	while(true){
		int chose=show_menu();
		
		system("cls");
		switch(chose){
			case 1: 
				print_product(products, size);
				break;
			
			case 2: 
				add_product(products, size);
				break;
			
			case 3: 
				delete_product(products,size);
				break;
			case 0: 
				cout <<" bye bye!";
				return 0;
			default:
				cout <<"lua chon khong hop le";
		}
		cout <<"ban co muon tiep tuc khong?(1/0)";
		bool is_continue;
		
		cin >>is_continue;
		if(!is_continue)
		{
			cout << "Bye bye!";
			break;
		}
	}

	return 0;
	
}

int show_menu(){
	
	system("cls");
	int chose;
	cout <<" ======MENU ====" << endl;
	cout << "1.Xem danh sach cac san pham"<<endl;
	cout << "2.Them san pham moi"<<endl;
	cout << "3.xoa san pham"<<endl;
	cout << "0. thoat chuong trinh"<<endl;
	
	cout << "lua chon cua ban la: ";
	cin >>chose;
	
	return chose;
}

void print_product(Product *products, int size){
	if(!size){
		cout <<" chua co san pham nao." << endl;
	}else{
		cout << "Danh sach san pham "<<endl;
		for(int i=0;i<size;i++){
			cout << products[i]<<endl;
		}
	}
}

void add_product(Product* &products, int &size){
	Product new_product;
	cout << "Nhap thong tin san pham moi: "<<endl;
	cin >> new_product;
	
	int new_size =size +1;
	
	Product *tmp_products=new Product[new_size];
	
	for(int i=0;i<size;i++){
		tmp_products[i]=products[i];
	}
	tmp_products[new_size -1]=new_product;
	
	delete[] products;
	
	products =tmp_products;
	
	size =new_size;	
	cout << "them san pham thanh cong"<<endl;
}

void delete_product(Product* &products, int &size){
	string deleted_name;
	cout<< "nhap ten san pham can xoa: ";
	cin.ignore();
	getline(cin,deleted_name);
	
	int deleted_index=-1;
	for(int i=0;i<size;i++){
		if(!deleted_name.compare(products[i].name))
		{
			deleted_index=i;
			break;
		}
	}
	if(deleted_index ==-1){
		cout <<"khong tim thay san pham!"<<endl;
		return;
	}
	for(int i=deleted_index;i<size -1;i++){
		products[i]=products[i+1];	
	}
	size--;
	
	Product *tmp_products= new Product[size];
	for(int i=0;i<size;i++){
		tmp_products[i]=products[i];
	}
	delete[] products;
	
	products=tmp_products;
	
	cout << "xoa thanh cong"<<endl;
}




