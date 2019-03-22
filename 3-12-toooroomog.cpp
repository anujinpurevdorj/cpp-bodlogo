#include<iostream>
using namespace std;

int main(){
	int n,i=0,j=0;
	cin >> n;
	int a[n*2-1][n*2-1],m=n,b=n*2-1,c=0;
	while(m >= 1){
		for(i; i < b; i ++){
			if(i < b-1){
				a[j][i] = m;
			}else if(i == b-1 && j <= b-1){
				a[j][i] = m;
				j ++;
				i --;
			}else{
				i ++;
			}
		}
		i -=2;
		j --;
		for(i;i >= c; i --){
			if(i > c){
				a[j][i]=m;
			}else if(i == c && j > c){
				a[j][i]= m;
				j --;
				i ++;
			}else{
				i --;
			}
		}
		i += 3;
		j ++;
		m --;
		b --;
		c ++;
	}
	for(int i = 0; i < n*2-1; i ++){
		for(int j = 0; j < n*2-1; j ++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
