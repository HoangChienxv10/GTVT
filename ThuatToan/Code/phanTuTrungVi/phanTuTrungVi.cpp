#include<bits\stdc++.h>

using namespace std;

int main(){
	int n,x,y;
	priority_queue<int> L;//uu tiên lon
	priority_queue<int, vector<int>, greater<int> > R;//uu tien be
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		i%2?L.push(x):R.push(x);
		if(i>1 && L.top()>R.top()){
			x = L.top(); L.pop();
			y = R.top(); R.pop();
			L.push(y);
			R.push(x);
		}
		cout<<L.top()<<", ";	
	}	
}



