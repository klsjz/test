#include <iostream>
using namespace std; 

int num(int day) { 
	if(day == 0) return 1;
	int m = 1, n = 0;
	int num = (day - 1) * 3;
	while(num--){
		m = m + n;
		n = m - n;
	}	
	return m;
}

int main(){
	int n;
	cin>>n;
	int *days = new int[n];
	for(int i = 0; i < n; ++i){
		cin >> days[i];
	}
	for(int i = 0; i < n; ++i){
		cout << num(days[i] )<< endl;
	}
	return 0;
}
