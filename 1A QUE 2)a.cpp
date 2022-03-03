//Write a program to implement the following operations on a Sparse Matrix, assuming 
//the matrix is represented using a triplet.
//Transpose of a matrix.


#include<iostream>
using namespace std;
#define N 20

int main(void)
{
    int r[N],c[N],v[N],row,colm,count=1;
    cout<<"ENTER ROWS OF YOUR SPARCE MATRIX==>";
    cin>>row;
    cout<<"\nENTER COLUMNS OF YOUR SPARCE MATRIX==>";
    cin>>colm;
    r[0]=row;
    c[0]=colm;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            int temp;
            cin>>temp;
            if(temp!=0)
            {
                v[count]=temp;
                r[count]=i;
                c[count]=j;
                count++;
            }
        }
    }
    v[0]=count-1;
    cout<<"NON ZERO ELEMENTS OF SPARCE MATRIX\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<v[count]<<" ";
        count++;
    }
    cout<<endl;
    cout<<"ROW INDEX OF NON ZERO ELEMENTS\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<r[count]<<" ";
        count++;
    }
    cout<<endl;
    cout<<"COLUMN INDEX OF NON ZERO ELEMENTS\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<c[count]<<" ";
        count++;
    }
    cout<<endl;
    for(int i=1;i<=v[0];i++)
    {
        for(int j=i+1;j<=v[0];j++)
        {
            if(c[i]>c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
                int temp2=r[i];
                r[i]=r[j];
                r[j]=temp2;
                int temp3=v[i];
                v[i]=v[j];
                v[j]=temp3;
            }
        }
    }
    cout<<"row INDEX OF NON ZERO ELEMENTS\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<c[count]<<" ";
        count++;
    }
    cout<<endl;
    cout<<"colm INDEX OF NON ZERO ELEMENTS\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<r[count]<<" ";
        count++;
    }
    cout<<endl;
    cout<<"NON ZERO ELEMENTS OF transpose of SPARCE MATRIX\n";
    count=0;
    for(int i=0;i<=v[0];i++)
    {
        cout<<v[count]<<" ";
        count++;
    }
    cout<<endl;
    count=1;
    int count1=1;
    for(int i=0;i<c[0];i++)
    {
        for(int j=0;j<r[0];j++)
        {
            if(c[count]==i&&r[count1]==j)
            {
                cout<<v[count1]<<" ";
                count++;
                count1++;
            }
            else
            {
                cout<<"0 ";
            }
        }
         cout<<endl;
    }
    
}
