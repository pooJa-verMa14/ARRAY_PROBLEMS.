#include<iostream>
using namespace std;

void DIAGONAL(int *arr,int *row,int *colm);

int main(void)
{
    int arr[100],row,colm;
    cout<<"ENTER ROWS OF YOUR DIAGONAL MATRIX==>";
    cin>>row;
    cout<<"\nENTER COLUMN OF YOUR DIAGONAL MATRIX==>";
    cin>>colm;
    DIAGONAL(arr,&row,&colm);

    
}


void DIAGONAL(int *arr,int *row,int *colm)
{
    if(*row!=*colm)
    {
        cout<<"TO MAKE DIAGONAL MATRIX ROWS AND COLUMNS OF YOUR MATRIX MUST BE SAME\n";
    }
    else
    {
        cout<<"ENTER YOUR DIAGONAL ENTERIES\n";
        for(int i=0;i<*row;i++)
        {
            cin>>arr[i];
        }
        cout<<"YOUR DIAGONAL MATRIX IS\n";
        for(int i=0;i<*row;i++)
        {
            for(int j=0;j<*colm;j++)
            {
                if(i==j)
                {
                    cout<<arr[i]<<" ";
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
