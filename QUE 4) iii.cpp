#include<iostream>
using namespace std;



int main(void)
{
    int arr1[20][20],arr2[20][20],n,m;
    cout<<"ENTER ROWS YOUR MATRIX==>";
    cin>>n;
    cout<<"\nENTER COLUMN YOUR MATRIX==>";
    cin>>m;
    cout<<"\nENTER ELEMNTS OF YOUR MATRIX\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"YOUR 1ST MATRIX\n";
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    cout<<"TRANSPOSE OF THE MATRIX\n";
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }

    

}
