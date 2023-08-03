#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[10000000], s2[10000000];
    scanf("%s\n%s", s1, s2);
    
    int l=-1, j;
    short f;
    
    for(int i=0; i<strlen(s2); i++){
        f=0;
        for(j=l+1; j<strlen(s1); j++){
            if(s2[i] == s1[j]){
                f=1;
                l=j;
                break;
            }
        }
        
        if(f==0){
            printf("NO");
            return;
        }
    }
    printf("YES");
    
}