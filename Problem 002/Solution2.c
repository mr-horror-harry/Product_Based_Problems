#include<stdio.h>
#include<stdlib.h>

int main()
{
    short m, n, i, j, k, l, p, q;
    scanf("%hu %hu", &m, &n);
    
    int big[m][m], sml[n][n];
    
    for(i=0; i<m ; i++)
        for(j=0; j<m; j++)
            scanf("%d ", &big[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d ", &sml[i][j]);
            
    short iF, oF;
    for(i=0; i<=m-n; i++){
        for(j=0; j<=m-n; j++){
            
            oF=0;
            for(k=i, p=0; p<n; k++, p++){
                iF=0;
                for(l=j, q=0; q<n; l++, q++){
                    if(big[k][l] != sml[p][q]){
                        iF=1;
                        break;
                    }
                }
                if(iF==1){
                    oF=1;
                    break;
                }
            }
            if(oF==0){
                printf("TRUE");
                return;
            }
        }
    }
    printf("FALSE");
}