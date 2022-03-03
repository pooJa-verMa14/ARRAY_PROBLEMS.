#include<iostream>
using namespace std;



int main(void)
{
    int arr1[20][20],arr2[20][20],result[20][20],sum,m,n,p,q;
    cout<<"ENTER ROWS YOUR 1ST MATRIX==>";
    cin>>n;
    cout<<"\nENTER COLUMN YOUR 1ST MATRIX==>";
    cin>>m;
    cout<<"\nENTER ELEMNTS OF YOUR 1ST MATRIX\n";
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
    cout<<"ENTER ROWS YOUR 2ND MATRIX==>";
    cin>>p;
    cout<<"\nENTER COLUMN YOUR 2ND MATRIX==>";
    cin>>q;
    cout<<"\nENTER ELEMNTS OF YOUR 2ND MATRIX\n";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"YOUR 2nd MATRIX\n";
 
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }


    if(m!=p)
    {
        cout<<"MATRIX MULTIPLICATION IS NOT POSSIBLE\n";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<p;j++)
            {
                sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum + arr1[i][k]*arr2[k][j];
                }
                result[i][j]=sum;
            }
        }

    }
    cout<<"YOUR REQUIRED MATRIX\n";
 
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<result[i][j]<<"   ";
        }
        cout<<"\n";
    }

}

