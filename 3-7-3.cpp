//natural a b toonudin urjwer ni c toonii dawtalt boldog
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	cout << a*b % 10 %c + a*b / 10 % 10 %c + a*b / 100 % 10 %c + a*b / 1000% 10 %c + a*b / 10000% 10 % c +1; 
}
