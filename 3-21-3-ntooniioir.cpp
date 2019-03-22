#include<iostream>
#include<cmath>
using namespace std;
int anh(int n){
	int c = 0;
	for(int i = 2; i < n;i ++){
		if(n % i == 0)c++;
	}
	if(c == 0)return 1;
	else return 0;
}
int pal(int n){
	int m = n,k=0;
	while(m != 0){
		k = k * 10 + m % 10;
		m /= 10; 
	}
	if(k == n)return 1;
	else return 0;
}
int tugs(int n){
	int c = 0;
	for(int i = 2; i < 100; i ++){
		if(anh(i) == 1){
			if(pow(2,i-1) * (pow(2,i)-1)== n)c++,i = 100;
		}
	}
	if(c == 1)return 1;
	else return 0;
}
int main(){
	int n,m=0;
	cin >> n;
	int t = n,k=n;
	cout << "Hamgiinn oir anhnii too: ";
	while(m == 0){
		if(anh(t) == 1){
			cout << t << endl;
			m ++;
		}else if(anh(k) == 1){
			cout << k << endl;
			m ++;
		}
		t ++;
		k --;
	}
	t = n;
	k = n;
	m = 0;
	cout << "Hamgiin oir palendrom too: ";
	while(m == 0){
		if(pal(t) == 1)cout << t << endl, m++;
		else if(pal(k) == 1)cout << k << endl, m++;
		t ++;
		k --;
	}
	t = n;
	k = n;
	m = 0;
	cout << "Hamgiinn oir tugs too: ";
	while(m == 0){
		if(tugs(t) == 1)cout << t << endl, m++;
		else if(tugs(k) == 1)cout << k << endl, m++;
		t ++;
		k --;
	}
}
