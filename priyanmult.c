#include<stdio.h>
int main(){
    int m,n,p,i,j;
    
   scanf("%d%d",&m,&m);
    int A[m][m];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
          
        }
    }
    scanf("%d%d",&m,&m);
    
    int B[m][m];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&B[i][j]);
           
        }
    }
    int C[m][m];
    for(i=0;i<m;i++){
         
        for(j=0;j<m;j++){
            C[i][j]=0;
            for(int k=0;k<m;k++){
                C[i][j]+=A[i][k]*B[k][j];    
            }
        }
           
    }
    for(i=0;i<m;i++){
       
        for(j=0;j<m;j++){
          printf("%d\t",C[i][j]);
        }
        printf("\n");
           
    }
     
   
   
    return 0;
    
    
}