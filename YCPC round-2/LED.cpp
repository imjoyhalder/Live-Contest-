#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int arr[10] = {6,2,5,5,4,5,6,3,7,6}; 
    
    int t; cin>>t; 
    while(t--){
        string str; cin>>str; 
        int led = 0; 
        for(char c: str){
            if(c=='0'){
                led+=arr[0]; 
            }
            else if(c=='1'){
                led+=arr[1]; 
            }
            else if(c=='1'){
                led+=arr[1]; 
            }
            else if(c=='2'){
                led+=arr[2]; 
            }
            else if(c=='3'){
                led+=arr[3]; 
            }
            else if(c=='4'){
                led+=arr[4]; 
            }
            else if(c=='5'){
                led+=arr[5]; 
            }
            else if(c=='6'){
                led+=arr[6]; 
            }
            else if(c=='7'){
                led+=arr[7]; 
            }
            else if(c=='8'){
                led+=arr[8]; 
            }
            else{
                led+=arr[9]; 
            }

        }
        cout<<led<<' '<<"leds"<<endl; 
    }
    return 0;
} 