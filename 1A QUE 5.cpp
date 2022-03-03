//Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

#include<iostream>
using namespace std;

int main(void)
{
    int arr[100][100],m,n;
    cout<<"ENTER THE ROWS OF YOUR ARRAY\n";
    cin>>m;
    cout<<"ENTER THE COLUMNS OF YOUR ARRAY\n";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int top=0,bottom=m-1,left=0,right=n-1;
    int dir=0; //left to right;
    // dir=1; //top to bottom;
    // dir=2; //right to left;
    // dir=3; //bottom to top;

    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
              cout<<arr[top][i]<<" ";
              top=top+1;
        }
        else if (dir==1)
        {
            for(int i=top;i<=bottom;i++)
                cout<<arr[i][right]<<" ";
                right=right-1;
        }
        else if (dir==2)
        {
            for(int i=right;i>=left;i--)
            cout<<arr[bottom][i]<<" ";
            bottom=bottom - 1;

        }
        else if (dir==3)
        {
            for(int i=bottom;i>=top;i--)
            cout<<arr[i][left]<<" ";
            left=left + 1;
        }
        dir=(dir+1)%4;
        
        
    }

}
