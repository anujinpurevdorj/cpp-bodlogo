//udursar oruulahad ymar garag we
#include<iostream>
using namespace std;

int main(){
	int d,m,nd=0;
	cin >> d >> m;
	char days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	for(int i = 1; i < m; i ++){
		if(i <= 7 && i % 2 != 0)nd+=31;
		else if(i > 7 && i %2 == 0)nd+=30;
		else if(i < 7 && i %2 == 0)nd+=30;
		else if(i > 7 && i % 2 != 0)nd+=31;
	}
	nd += d;
	nd = nd%7;
	if(nd > 5)cout << days[0]
	cout << nd;
}

