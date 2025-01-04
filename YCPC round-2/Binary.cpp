#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int n; cin>>n; 
    string str; cin>>str; 
    int one = 0; 
    int zero = 0 ;
    
    for(char c: str){
        if(c=='0'){
            zero++; 
        }
        else{
            one++; 
        }
    }
    cout<<zero<<' '<<one<<endl; 
    return 0;
} 