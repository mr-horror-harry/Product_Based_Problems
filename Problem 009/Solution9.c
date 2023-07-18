#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ar[10000];
    
    short n=0; 
    while(scanf("%d ", &ar[n++])==1);
    n--;
    
    _Bool f;
    for(int i=0; i<n-1; i++){
        
        f=1;
        
        for(int j=i+1; j<n; j++){
            if(ar[j]>=ar[i]){
                f=0;
                break;
            }
        }
        
        if(f) printf("%d ", ar[i]);
        
    }
    
    printf("%d ", ar[n-1]);
    
}