#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[50];
	gets(a);
	char b[50];
	char c[50];
	strcpy(b,a);
	int n = 0;
	for(int i=0; i < strlen(a); i ++){
		if(a[i] != ' '){
			c[n]=a[i];
			n++;
		}else{
			int d=0;
			n = 0;
			for(int j = i; j < strlen(b); j ++){
				if(b[j] == a[n])d++;
			}
		}
	}
}
