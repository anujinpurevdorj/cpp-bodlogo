#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int increment(int i){
	return ++i;
}
int main(){
	vector <int> arr;
	for(int i = 1; i < 6; i ++){
		arr.push_back(i*10);
	}
	transform(arr.begin(),arr.end(),arr.begin(), increment);
	
	for(vector<int>::iterator it = arr.begin(); it!= arr.end(); ++it){
		cout << *it << " ";
	}
}
