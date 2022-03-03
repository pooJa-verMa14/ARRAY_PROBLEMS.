//Write a program to find sum of every row and every column in a two-dimensional array.

#include<iostream>
using namespace std;

int main(void)
{
    int arr[100][100];
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
         int sumRow=0;
         for(int j=0;j<colm;j++)
         {
            sumRow=sumRow+arr[i][j]; 
         }
         cout<<"SUM OF "<<i+1<<" ROW IS "<<sumRow<<endl;

    }
    for(int i=0;i<row;i++)
    {
         int sumColm=0;
         for(int j=0;j<colm;j++)
         {
            sumColm=sumColm+arr[j][i]; 
         }
         cout<<"SUM OF "<<i+1<<" COLUMN IS "<<sumColm<<endl;

    }
   

}
