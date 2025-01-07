#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll fre[4]={0};
 
   for(auto ch:s)
   {
        if(ch!='?')
        {
            fre[ch-'A']++;
        }
   }
   ll cnt=0;
   for(int i=0;i<4;i++)
   {
        cnt+=min(fre[i],n);
   }
   cout<<cnt<<endl;
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