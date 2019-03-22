#include<iostream>
using namespace std;
int fac(int n){
	if(n > 0) return n * fac(n-1);
	else return 1;
}
int main(){
	for(int i = 1; i < 1000; i ++){
		int s = 0,n=i;
		while(n != 0){
			s+= fac(n%10);
			n /= 10;
		}
		if(s == i)cout << i << " ";
	}
}
