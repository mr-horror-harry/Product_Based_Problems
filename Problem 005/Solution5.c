#include<stdio.h>
#include<stdlib.h>

int main()
{
    short n;
    scanf("%hu", &n);
    
    short j, jCt, vCt;
    for(short i=1; i<=n; i++){
        
        vCt=n-i+1;
        jCt=n;
        for(j=i; vCt-->0; j+=jCt--){
            printf("%d ", j);
        }
        
        printf("\n");
        
    }

}