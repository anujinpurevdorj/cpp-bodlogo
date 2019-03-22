#include<iostream>
using namespace std;

int main(){
	string a,b;
	cin >> a;
	cin >> b;
	for(int i = 0; i < a.length(); i ++){
		for(int j = 0; j < b.length(); j ++){
			if(a[i] == b[j])a[i]='b';
		}
	}
	for(int i = 0; i < a.length(); i ++){
		if(a[i] != 'b')cout << a[i] << " ";
	}
}
