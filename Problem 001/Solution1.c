#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int val=1, res=0, tmp;
    while(n-->0){
        
        tmp=val;
        while(tmp>0){
            res++;
            tmp/=10;
        }
        
        val++;
    }
    
    printf("%d", res);

}