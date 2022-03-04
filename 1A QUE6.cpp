//Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.

#include<iostream>
using namespace std;

int main(void)
{
    int arr[100][100],A;
    cout<<"ENTER THE VALUE OF INTEGER==>";
    cin>>A;
    cout<<"\n";
    int top=0,bottom=A-1,left=0,right=A-1;
    int dir=0; //left to right;
    // dir=1; //top to bottom;
    // dir=2; //right to left;
    // dir=3; //bottom to top;
    int n=1;

    while(n<=A*A)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
              arr[top][i]=n++;
              top=top+1;
        }
        else if (dir==1)
        {
            for(int i=top;i<=bottom;i++)
                arr[i][right]=n++;
                right=right-1;
        }
        else if (dir==2)
        {
            for(int i=right;i>=left;i--)
            arr[bottom][i]=n++;
            bottom=bottom - 1;

        }
        else if (dir==3)
        {
            for(int i=bottom;i>=top;i--)
            arr[i][left]=n++;
            left=left + 1;
        }
        dir=(dir+1)%4;
        
        
    }
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<A;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
