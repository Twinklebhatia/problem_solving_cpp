#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 
#define testcase long long t; cin>>t;

int main()
{
	testcase;
	while(t--){
		ll n;
		vector <ll> v;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(ll i=0;i<n-1;i++) v.push_back(a[i+1]-a[i]);
		cout<<*min_element(v.begin(),v.end())<<endl;		
	}
	return 0;
}

