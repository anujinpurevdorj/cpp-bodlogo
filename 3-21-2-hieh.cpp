#include<iostream>
using namespace std;
int hieh(int a, int b){
	if(a == 0 || b == 0)return a+b;
	if(a > b)hieh(a-b,b);
	else hieh(a,b-a);
}
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << hieh(hieh(a,b),c);
}
