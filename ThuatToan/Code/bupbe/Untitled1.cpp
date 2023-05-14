#include<bits/stdc++.h>

using namespace std;

int main(){
	queue<int> Q;
	
	long n,k,a[10005], res = 0;
	
	cin>>n>>k;
	
	for(int i=1; i<=n; i++) cin>>a[i];
	
	sort(a+1, a+n+1, greater<long>());
	
	for(int i=1;i<=n;i++){
		Q.push(a[i]);
		if(Q.front()>= k+a[i]) Q.pop();
		else res += a[i];
	}
	
	cout<<Q.size()<<"\n"<<res;
	
}
