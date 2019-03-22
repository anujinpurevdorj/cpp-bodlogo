#include<iostream>
using namespace std;
int a[1000]={0};

int niilb(int m){
	int s = 0;
	for(int i = 0; i < m; i ++){
		s += a[i];
	}
	for(int i = 0; i < m; i ++){
		if(i == m-1)a[i]=s;
		else a[i]=a[i+1];
	}
	return s;
}
int main(){
	for(int i = 1; i < 1000; i ++){
		int n=i,m=0,k;
		while(n != 0){
			m ++;
			n /= 10;
		}
		k=m;
		n=i;
		while(n != 0){
			a[m-1]=n%10;
			n /= 10;
			m --;
		}
		while(n < i){
			n=niilb(k);
		}
		if(n == i)cout << i << " ";			
	}
}
