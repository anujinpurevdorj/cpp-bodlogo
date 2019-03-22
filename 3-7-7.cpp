//ugugdsun 4 orointoi too ni zuunes barun tish baruunas zuun tiish adilhan unshigddag 

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << (n / 1000 - n % 10)+(n / 100 % 10 - n / 10 % 10)+1;
}
