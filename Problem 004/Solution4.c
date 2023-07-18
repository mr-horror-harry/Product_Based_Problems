#include<stdio.h>
#include<stdlib.h>

void starPrint(int n){
    for(int i=0; i<n; i++)
        printf("*");
        
}

int main()
{
    char s[1001];
    scanf("%s ", s);
    
    int ptr, ct=strlen(s)-1, rnd=1, tmp;
    
    while(ct>=0){
        starPrint(ct--);
        
        tmp=rnd++;
        ptr=strlen(s)/2;
        
        while(tmp-->0){
            printf("%c", s[ptr++ % strlen(s)]);
        }
        
        printf("\n");
    }
}