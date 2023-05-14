#include<bits/stdc++.h>
using namespace std;
long fib(int n){
	long f[n+5] = {1,1};
	for(int i=2; i<=n;i++){
		f[i] = f[i-1]+ f[i-2];
	}
	return f[n];
}
int main()
{
	int n; 
	cin>>n;
	cout<<fib(n);
}
