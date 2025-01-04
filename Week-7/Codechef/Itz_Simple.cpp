#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n,k,p;
	cin>>n>>k>>p;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	sort(v.begin(),v.end());
	int ved=k+v[n-1];
	int varun=p;
	for(int i=0;i<n-1;i++)
	{
	    varun+=v[i];
	}
	if(ved==varun)
	{
	    cout<<"Equal"<<endl;
	}
	else if(ved>varun)
	{
	    cout<<"Ved"<<endl;
	}
	else 
	{
	    cout<<"Varun"<<endl;
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 