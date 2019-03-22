#include<iostream>
using namespace std;

int main(){
	int n,m=1;
	cin >> n;
	int a[n*2-1][n*2-1];
	for(int i = 0; i < n*2-1; i ++){
		for(int j = 0; j< n*2-1; j ++){
			a[i][j]=0;
		}
	}
	int i = (n*2-1)/2,b=n*2-1,j=0,c=0;
	while(m <= n*n){
		for(j; j < b; j ++){
			a[j][i] = m;
			if(j < (n*2-1)/2)i ++;
			else i --;
			m ++;
		}
		j -=2;
		for(j; j > c; j --){
			a[j][i]=m;
			if(j > (n*2-1)/2)i--;
			else i ++;
			m ++;
		}
		j+=2;
		b-=2;
		c+=2;
	}
	for(int i = 0; i < n*2-1; i ++){
		for(int j = 0; j< n*2-1; j ++){
			if(a[i][j] != 0)cout << a[i][j] << " ";
			else cout << "   ";
		}
		cout << endl;
	}
}
