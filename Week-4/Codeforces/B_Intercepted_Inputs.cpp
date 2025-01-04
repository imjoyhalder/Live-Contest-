#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> pr(int a){
    vector<pair<int,int>> vec; 
    for(int i=1; i<=a; i++){
        if(a%i==0){
            vec.push_back({i,a/i}); 
        }
    }
    return vec; 
}

void joy_solution(){
    int n; cin>>n; 
    vector<int> v(n); 
    map<int,int> mp; 

    for(int &x: v){
        cin>>x; 
        mp[x]++; 
    }

    
    int k = n-2; 
    vector<pair<int,int>> result = pr(k); 

    for(auto it: result){
        if(mp.find(it.first)!= mp.end() && mp.find(it.second)!=mp.end()){
            cout<<it.first<<" "<<it.second<<' '<<endl;
            return; 
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        joy_solution();
    }

    return 0;
}
