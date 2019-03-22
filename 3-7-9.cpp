#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin >>n;
	int l[n];
	for(int i = 0; i < n;i ++){
		char a[100];
		cin >> a;
		int count =0;
		for(int j = 0; j < strlen(a); j ++){
			if(a[j] == 'A' || a[j] == 'a' || a[j] == 'O' || a[j] == 'o' ||a[j] == 'E' || a[j] == 'e' || 
			a[j] == 'I' || a[j] == 'i' || a[j] == 'U' || a[j] == 'u' || a[j] == 'A' || a[j] == 'a'){
				count ++;
			}
		}
		l[i] = count;
	}
	for(int i = 0; i < n; i ++){
		cout << l[i] << " ";
	}
}
