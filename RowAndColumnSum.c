/* Write a program to find sum of every row and every column in a two-dimensional 
array.*/
#include <stdio.h>

int main()
{
    int i,j,sum=0,rsum=0,csum=0;
    int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for( i =0;i<4;i++)
    {
        for( j =0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for( i =0;i<4;i++)
    {
      for( j =0;j<3;j++)  
      {
          rsum=rsum+a[i][j];
      }
      printf("\n row sum is %d",rsum);
      rsum=0;
    }
    for( i =0;i<3;i++)
    {
      for( j =0;j<4;j++)  
      {
          csum=csum+a[j][i];
      }
      printf("\n column sum is %d",csum);
      csum=0;
    }

    return 0;
}

