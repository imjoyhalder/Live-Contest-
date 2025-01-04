#include<stdio.h>

void solve(){
    int n,m,k; 
    scanf("%d %d %d", &n, &m, &k); 

    int *a = (int*)malloc(m*sizeof(int)); 
    int *q = (int*)malloc(k*sizeof(int)); 
    int *know = (int*)calloc(n+1,sizeof(int)); 

    for(int i=0; i<m; i++){
        scanf("%d", &a[i]); 
    }

    for(int i=0; i<k; i++){
        scanf("%d", &q[i]); 
        know[q[i]] = 1; 
    }

    for(int i=0; i<m; i++){
        if(know[a[i]]){
            printf("0"); 
        }
        else{
            printf("1"); 
        }
    }
    printf("\n"); 
    free(a); 
    free(q); 
    free(know); 
}

int main(){
    int t; 
    scanf("%d", &t); 
    while(t--){
        solve(); 
    }
    return 0;
}