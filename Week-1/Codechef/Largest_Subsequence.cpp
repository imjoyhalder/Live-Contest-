#include<bits/stdc++.h>
using namespace std;
string getSubSeq(string s, int n)
{
    string res = "";
    int cr = 0;
    while (cr < n) {

        // Get the max character from the string
        char mx = s[cr];
        for (int i = cr + 1; i < n; i++)
            mx = max(mx, s[i]);
        int lst = cr;

        // Use all the occurrences of the
        // current maximum character
        for (int i = cr; i < n; i++)
            if (s[i] == mx) {
                res.push_back(s[i]);
                lst = i;
            }

        // Repeat the steps for the remaining string
        cr = lst + 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        string str; cin>>str; 


        cout<<getSubSeq(str,n).size()<<endl; 
        // int mx = INT_MIN;
        // int cnt = 0; 
        // for(int i=0; i<n-1; i++){
        //     if(str[i]==str[i+1]){
        //         cnt++; 
        //     }
        //     else{
        //         mx = (mx,cnt); 
        //         cnt = 0; 
        //     }
        // }
        // cout<<mx<<endl; 
    }
     

      
    return 0;
} 