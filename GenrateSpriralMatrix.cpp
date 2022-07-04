/*Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.

Input Format:

The first and the only argument contains an integer, A.
Output Format:

Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:

1 <= A <= 1000
Examples:

Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]  */
        
        
#include <iostream>

using namespace std;

int main()
{
int a[10][10],n,r=0,c=0,lrow,lcol,value=1,i;
cout<<"ENTER THE VALUE OF A (1<=A<=1000) :";
cin>>n;
int arr[n][n];
lrow=n,lcol=n;
while(r<lrow && c<lcol)
{
    for(i=c;i<lcol;i++)
    {
        arr[r][i]=value++;
        
    }
    r++;
    for(i=r;i<lrow;i++)
    {
        arr[i][lcol-1]=value++;
    }
    lcol--;
    if(r<lrow)
    {
        for(i=lcol-1;i>=c;i--)
        {
            arr[lrow-1][i]=value++;
        }
        lrow--;
    }
      if(c<lcol)
    {
        for(i=lrow-1;i>=r;i--)
        {
            arr[i][c]=value++;
        }
        c++;
    }
}
for(i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
      cout<<arr[i][j]<<"   ";
  }
  cout<<endl;
}


}
