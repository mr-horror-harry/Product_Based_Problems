#include<stdio.h>
#include<stdlib.h>

int absolute(int x);

int main()
{
    char s[8];
    scanf("%s ", s);
    
    for(short i=1; i<strlen(s); i++){
        if( absolute(s[i] - s[i-1]) != 1){
            printf("no");
            return;
        }
    }
    printf("yes");
}

int absolute(int x){
    return x>=0 ? x : x*-1;
}