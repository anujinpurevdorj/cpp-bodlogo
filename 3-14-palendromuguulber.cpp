#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string str;
	char a[50];
	int n=0,c=0,s=0;
	getline(cin,str);
	for(int i = 0; i < str.length() / 2; i ++){
		if(str[i] != ' '){
			a[n]=str[i];
		}else{
			n = 0;
			s += strlen(a);
			for(int j = str.length()-s; j < str.length(); j ++){
				if(str[j] != ' '){
					if(str[j] != a[n]){
						c++;
					}
					n ++;  
				}else{
					j = str.length();
				}
			}
			n = 0;
		}
	}
	if(c == 0)cout << "Yes";
	else cout << "No";
}
