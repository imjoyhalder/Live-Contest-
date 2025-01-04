#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve()
{
   ll n;
   cin>>n;
   vector<vector<ll>>grid(n);
   for(int i=0;i<n;i++)
   {
        grid[i]=vector<ll>(n,0);
   }
   ll st=(n+1)/2+1;
   for(int i=0;i<n;i++)
   {
        ll ex=st;
        for(int j=0;j<n;j++)
        {
            cout<<ex<<" ";
            ex++;
            if(ex>n)
            {
                ex=1;
            }
        }
        st++;
        if(st>n)
        {
            st=1;
        }
        cout<<endl;
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}