#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b,res=0;
		
	vector<int> A[10005];
	cin>>n;
	while(n--) {
		cin>>a>>b;
		A[a].push_back(b);
	}
	
	priority_queue<int> Q;
	for(int i= 10000; i>0; i--){
		for(auto x:A[i]) Q.push(x);
		if(Q.size()>0){
			res += Q.top();
			Q.pop();
		}
	}
	cout<<res;
}

