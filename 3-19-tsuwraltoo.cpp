//ehnii 20 gishuunii tsuwral
#include<iostream>
using namespace std;
int a[100]={0};
int tsuwral(int n){
	if(n<0)return 0;
	if(n == 0)return 1;
	if(a[n] == 0) return a[n]= tsuwral(n-1)*2+tsuwral(n-2);
	else return a[n];
}
int main(){
	int n=1;
	while(n <= 20){
		cout << tsuwral(n-1) << " ";
		n++;
	}
}
