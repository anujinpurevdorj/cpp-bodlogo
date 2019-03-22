#include<iostream>
using namespace std;

int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	for(int i = 0; i < str2.length(); i ++){
		for(int j = 0; j < str1.length(); j++){
			if(str1[j] == str2[i])str1[j] = ' ';
		}
	}
	cout << str1;
}
