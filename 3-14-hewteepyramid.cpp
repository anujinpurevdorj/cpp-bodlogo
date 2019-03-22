#include<iostream>
using namespace std;

int main(){
	int n,m=1,k;
	cin >> n;
	for(int i = 0; i <= n*2; i ++){
		if(i < n+1)k = i*2;
		else k = (n*2-i)*2;
		if(k == 0)k = 1;
		for(int j = 0; j < k; j ++){
			if(j %2 == 0)cout << "*";
			else cout << m,m++;
		}
		cout << endl;
		m=1;
	}
}
