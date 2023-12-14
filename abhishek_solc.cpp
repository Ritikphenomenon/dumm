#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input16.txt","r",stdin);
	freopen("output16.txt","w",stdout);
	#endif
     ll N=1e9;
int s,b;
int x=0;
cin>>s>>b;
ll a[s];
for(int i=0;i<s;i++)cin>>a[i];
pair<ll,ll>p[b];
for(int i=0;i<b;i++)cin>>p[i].first>>p[i].second;
sort(p,p+b);
for(int i=0;i<s;i++){
ll l=0;
x=lower_bound(p,p+b,make_pair(a[i],N))-p;
for(int n=0;n<x;n++)
l+=p[n].second;
cout<<l<<" ";
}
 
return 0;
}