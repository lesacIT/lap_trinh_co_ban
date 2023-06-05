#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main(){
	
	string str;
	
	cout << "nhap chuoi: ";
	getline(cin, str );
	
	//loai bo khoang trang o dau 
	while(str[0]==' '){
		str.erase(0,1);
	}
	//loai bo khoan trang o cuoi
	while(str[str.length()-1]==' ')	{
		str.erase(str.length()-1);
	}
	//loai bo khoang trang o giua cac tu
	int i=0;
	while(i<str.length())
	{
		if(str[i]==' '&& str[i+1]==' '){
			str.erase(i,1);
		}else{
			i++;
		}
	}
	//viet thuong toan bo cac chu cai
	for(int i=0;i<str.length();i++){
		str[i]=tolower(str[i]);
	}	
	//viet hoa chu cai dau 	
	str[0]=toupper(str[0]);
	for(int i=0;i<str.length();i++){
		if(str[i]==' ' && str[i+1]!=' ')
		{
			str[i+1]=toupper(str[i+1]);
		}
	}
	cout <<"ket qua: "<< str;
	
	return 0;
	
}

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    // Vi?t code ? dây
    // BU?C 1: ****** Lo?i b? kho?ng tr?ng d?u cu?i. ******
    // Lo?i b? kho?ng tr?ng d?u
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            if (str[i] == ' ') {
                i--;
            }
        } else {
            break;
        }
    }

    // Lo?i b? kho?ng tr?ng cu?i
    for (int i = str.length() - 1; i >=0; i--) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            if (str[i] == ' ') {
                i++;
            }
        } else {
            break;
        }
    }

    // BU?C 2: ****** Lo?i b? kho?ng tr?ng th?a ? gi?a các t?. ******
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            str.erase(i, 1);
            i--;
        }
    }

    // BU?C 3: ****** Vi?t hoa ch? cái d?u, các ch? còn l?i vi?t thu?ng. ******
    // Vi?t thu?ng t?t c? các ch? cái
    for (int i = 0; i < str.length(); i++ ) {
        if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
    }

    // Vi?t hoa ch? cái d?u tiên c?a chu?i
    if (str[0] != ' ') {
            str[0] = str[0] - 32;
        }

    // Vi?t hoa ch? cái d?u tiên sau d?u cách
    for (int i = 0; i < str.length(); i++ ) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            str[i + 1] = str[i + 1] - 32;
        }
    }

    std::cout << str;

    return 0;
}


*/
