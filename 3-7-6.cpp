//ugugdsun 4 orontoi toonii ehnii 2 n tsiifriin niilber suulcin 2n tsifrin sumtai tenzuu
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << (n/1000 + n / 100 % 10) - (n / 10 % 10 + n %10)+1; 
}
