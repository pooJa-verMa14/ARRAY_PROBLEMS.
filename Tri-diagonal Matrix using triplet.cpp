#include<iostream>
using namespace std;

void TRIDIA(int *arr,int *row,int *colm);

int main(void)
{
    int arr[100],row,colm;
    cout<<"ENTER THE ROWS OF YOUR MATRIX==>";
    cin>>row;
    cout<<"\nENTER THE COLUMN OF YOUR MATRIX==>";
    cin>>colm;
    TRIDIA(arr,&row,&colm);
}


void TRIDIA(int *arr,int *row,int *colm)
{
    if(*row!=*colm)
    {
        cout<<"TO MAKE A TRI-DIAGONAL MATRIX ROW AND COLM MUST BE SAME\n";
    }
    else
    {
        cout<<"ENTER THE ELEMENTS OF YOUR MATRIX\n";
        int size=3*(*row)-2;
        int count=0;
        for(int i=0;i<*row;i++)
        {
            for(int j=0;j<*colm;j++)
            {
                int temp;
                cin>>temp;
                if(i==j || i-j==1 || i-j==-1)
                {
                    arr[count]=temp;
                    ++count;  
                }
            }
        }
        count=0;
        for(int i=0;i<size;i++)
        {
          cout<<arr[i]<<"  ";  
        }
        cout<<endl;
        for(int i=0;i<*row;i++)
        {
            for(int j=0;j<*colm;j++)
            {
                if(i==j || i-j==1 || i-j==-1)
                {
                     cout<<arr[count]<<" ";
                     ++count;
                }
                else
                {
                   cout<<"0 "; 
                } 
            }
            cout<<endl;
        }
    }
}
