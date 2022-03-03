//Write a program to find a saddle point in a two-dimensional array. A saddle point in a numerical array is a 
//number that is larger than or equal to every number in its column, 
//and smaller than or equal to every number in its row.

#include<iostream>
using namespace std;

int main(void)
{
    int arr[100][100],min[100],max[100];
    int row,colm;
    cout<<"ENTER THE NUMBER OF ROWS IN YOUR MATRIX\n";
    cin>>row;
    cout<<"ENTER THE NUMBER OF COLUMNS IN YOUR MATRIX\n";
    cin>>colm;
    cout<<"ENTER ELEMENTS OF MATRIX\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<row;i++)
    {
        int minRow=arr[i][0];
         for(int j=0;j<colm;j++)
         {
             if(arr[i][j]<minRow)
             {
                 minRow=arr[i][j];
             }
         }
         min[i]=minRow;
         
    }
    for(int i=0;i<colm;i++)
    {
        int maxColm=arr[0][i];
         for(int j=0;j<row;j++)
         {
             if(arr[j][i]>maxColm)
             {
                maxColm=arr[j][i];
             }
         }
         max[i]=maxColm;

    }
    int m1=min[0];
    for(int i=0;i<row;i++)
    {
        if(m1 < min[i])
        {
            m1=min[i];
        }
    }
    int m2=max[0];
    for(int i=0;i<colm;i++)
    {
        if(max[i]<m2)
        {
            m2=max[i];
        }
    }
    if(m1==m2)
    {
        cout<<"SADDLE POINT IS "<<m1;
    }
    else
    {
        cout<<"SADDLE POINT DOESN'T EXIST";
    }
}
