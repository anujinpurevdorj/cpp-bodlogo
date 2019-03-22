#include<iostream>
using namespace std;

int main(){
	int n,m=1;
	cin >> n;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j <= i; j ++){
			cout << char(64+m);
			m ++;
		}
		cout << endl;
	}
}
