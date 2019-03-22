#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n*2-1][n*2-1],m=1;
	for(int i = 0; i < n*2-1; i ++){
		for(int j = 0; j < n*2-1; j ++){
			if(i == j){
				a[i][j]=m;
			}else if(j == (n*2-1-1)-i){
				a[i][j]=m;
			}else{
				a[i][j]=0;
			}
		}
		if(i < (n*2-1-1)/2)m ++;
		else m --;
	}
	for(int i = 0; i < n*2-1; i ++){
		for(int j = 0; j < n*2-1; j ++){
			if(a[i][j]==0)cout << "  ";
			else cout << a[i][j]<< " ";
		}
		cout << endl;
	}
}
