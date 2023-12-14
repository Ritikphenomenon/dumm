#include <bits/stdc++.h>

using namespace std;

int main(){
    

    long long x=1e5;
	int s,b,a[x];
	cin>>s>>b;
	pair <int,int> dg[b];
	for(int i=0;i<s;i++){
	cin>>a[i];
	}
	for(int i=0;i<b;i++){
	cin>>dg[i].first>>dg[i].second;
	}
	
	sort(dg,dg+b);
	for(int i=0;i<s;i++){
	int f=lower_bound(dg,dg+b,make_pair(a[i],10000000))-dg;int sum=0;
	for(int j=0;j<f;j++){
	sum+=dg[j].second;
	}
	cout<<sum<<" ";
	}
	
    return 0;
	}