#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k, i, j;
    scanf("%d %d\n", &n, &k);
    
    int ar[n], tmp;
    
    for(i=0; i<n; i++)
        scanf("%d ", &ar[i]);
        
    int ct=n/k, beg=0, end=k;
    
    while(ct-->0){
        
        for(i=beg; i<end; i++){
            for(j=i+1; j<end; j++){
                if(ar[i] < ar[j]){
                    tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                }
            }
        }
        beg=end;
        end=beg+k;
        
    }
    
    // n%k!=0
    for(i=beg; i<n; i++){
        for(j=i+1; j<n; j++){
            if(ar[i] < ar[j]){
                tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    
    for(i=0; i<n; i++)
        printf("%d ", ar[i]);

}