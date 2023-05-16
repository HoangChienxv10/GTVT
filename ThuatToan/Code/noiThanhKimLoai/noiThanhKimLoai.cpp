#include<bits\stdc++.h>
using namespace std;

int main(){
	int n,a, res=0;
	priority_queue<int, vector<int>, greater<int>> Q;
	
	cin>>n;
	while(n--){
		cin>>a;
		Q.push(a);
	}
	while(Q.size()>1){
		int x = Q.top(); Q.pop();
		int y = Q.top(); Q.pop();
		res += x+y;
		Q.push(x + y);
	}
	cout<< res;
	
}
