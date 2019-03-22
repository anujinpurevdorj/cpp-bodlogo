#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a,b;
	char c[50];
	cin >> a;
	cin >> b;
	int x=0;
	for(int i = 0; i < a.length(); i ++){
		for(int j = 0; j < b.length(); j ++){
			if(a[i] == b[j]){
				c[x]=a[i];
				for(int l = x-1; l >= 0; l --){
					if(c[x] == c[l])c[l]='b';
				}
				x++;
			}
		}
	}
	for(int i = 0; i < strlen(c); i ++){
		if(c[i] != 'b')cout << c[i];
	}
}
