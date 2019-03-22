#include<iostream>
using namespace std;

int main(){
	string str;
	int n;
	cin >> str;
	cin >> n;
	int m = 1,k=n-2,u=n*2-1,l=k+3;
	for(int i = 0; i < n+2; i ++){
		for(int j = 0; j <= n*2; j ++){
			if(i < 2){
				if(j >= m && j <= k ){
					cout << "*";
				}else if(j > l &&j <= u){
					cout << "*";		
				}else{
					cout << " ";
				}
			}else if(i == 2){
				if(j < ((n*2+1)-str.length())/2){
					cout<<" ";
				}else{
					cout << str;
					j = n*2;
				}
				m=3;
				k=n*2-3;
			}else{
				if(j >= m && j <= k){
					cout << "*";
				}else{
					cout << " ";
				}
			}
		}
		if(i <= 2){
			m --;
			k ++;
			l --;
			u ++;
		}else{
			m ++;
			k --;
		}
		cout << endl;
	}
}
