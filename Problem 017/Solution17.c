#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[1000000], s2[1000000];
    scanf("%s %s", &s1, &s2);
    
    int i;
    _Bool a1[26], a2[26];
    
    for(i=0; i<strlen(s1); i++)
        a1[s1[i]-'a']=1;
        
    for(i=0; i<strlen(s2); i++)
        a2[s2[i]-'a']=1;
        
    short cmn=0, umn=0;
    
    for(i=0; i<26; i++){
        if(a1[i]==1 && a2[i]==1) cmn++;
        else if(a1[i]==1 && a2[i]==0 || a1[i]==0 && a2[i]==1) umn++;
    }
    
    printf("%d", cmn-umn >= 0 ? cmn-umn : umn-cmn);

}