#include <stdio.h>
int main() {
    int m,n,p,q;
    int A[10][10], B[10][10], result[10][10];
    
    printf("enter rows and columns of matrix A(m,n): ");
    scanf("%d %d",&m,&n);
    
    printf("enter rows and columns of matrix B(p,q): ");
    scanf("%d %d",&p,&q);
    
    if(n != p){
        printf("matrix multiplication not applicable.");
        return 1;
    }
    printf("enter elements of matrix A(%d x %d)in row major order:\n",m,n);
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        scanf("%d",&A[i][j]);
        
    printf("enter elements of matrix B(%d x %d)in row major order:\n",p,q);
    for(int i=0;i<p;i++)
      for(int j=0;j<q;j++)
        scanf("%d",&B[i][j]);
        
    for(int i=0;i<m;i++)
      for(int j=0;j<q;j++)
        result[i][j] = 0;
        
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
        
    }    
    printf("\nMatrix A(%d x %d):\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
          printf("%5d",A[i][j]);
        printf("\n");  
    }
    printf("\nMatrix B(%d x %d):\n",p,q);
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++)
          printf("%5d",B[i][j]);
        printf("\n"); 
    }
    
    printf("\nResultant matrix(AxB)(%d x %d):\n",m,q);
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
          printf("%5d",result[i][j]);
        printf("\n");  
    }    
    return 0;
}