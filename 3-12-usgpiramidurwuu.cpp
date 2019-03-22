#include<iostream>
using namespace std;

int main(){
	int n,m=65,t;
	cin >> n;
	for(int i = 0; i < n; i ++){
		t = m;
		for(int j = 0; j <= i; j ++){
			cout << char(m);
			m --;
		}
		m = t + i + 2;
		cout << endl;
	}
}
