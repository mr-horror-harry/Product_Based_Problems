#include<stdio.h>
#include<stdlib.h>

int main()
{
    short n, i, j, f;
    scanf("%hu\n", &n);
    
    int ar[n];
    
    scanf("%d ", &ar[0]);
    printf("%d ", ar[0]);
    
    for(i=1; i<n; i++){

        scanf("%d ", &ar[i]);
        
        f=1;
        for(j=0; j<i; j++){
            if(ar[j]>=ar[i]){
                f=0;
                break;
            }
        }
        if(f){
            printf("%d ", ar[i]);
        }
    }

}