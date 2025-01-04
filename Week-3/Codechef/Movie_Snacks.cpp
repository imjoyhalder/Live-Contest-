#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int x,y,z; 
    cin>>x>>y>>z; 
    
    cout<<min(((x*2)+(y*3)),(z*2)+y)<<endl; 
    return 0;
} 