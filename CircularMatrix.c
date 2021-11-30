#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int mat[n][n],mat2[n][n],temp[n],temp2[n];
    ///Taking input of n*n matrix
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(i==0){
              temp[j]=mat[i][j];
            }
        }
    }
    ///making a circular matrix based on first row
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        mat2[i][j]=temp[j];
       }
       for(k = 0,l=0;k<n;k++){
        if(k==0){
         temp2[k] = temp[n-1];
        }
       else{
          temp2[k] = temp[l];
          l++;
          }
       }
       for(k = 0;k<n;k++){
          temp[k] = temp2[k];
       }
    }
    ///checking the circular matrix and entered matrix are same or not
    int count;
    for(i = 0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
           if(mat[i][j]==mat2[i][j]);
           count++;
        }
    }
    
   if(count==n)
     printf("Yes\n");
   else
    printf("No\n");
}
