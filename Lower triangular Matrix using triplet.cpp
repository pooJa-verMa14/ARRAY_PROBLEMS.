#include<iostream>
using namespace std;

void LOWERTRI(int *arr,int *row,int *colm);

int main(void)
{
    int arr[100],row,colm;
    cout<<"ENTER ROWS OF YOUR DIAGONAL MATRIX==>";
    cin>>row;
    cout<<"\nENTER COLUMN OF YOUR DIAGONAL MATRIX==>";
    cin>>colm;
    LOWERTRI(arr,&row,&colm);
} 

void LOWERTRI(int *arr,int *row,int *colm)
{
    int count=0;
    if(*row!=*colm)
    {
        cout<<"TO MAKE LOWER TRIANGULAR MATRIX ROWS AND COLUMNS OF YOUR MATRIX MUST BE SAME\n";
    }
    else
    {
       int size=3*(*row)-3;
       cout<<"ENTER THE ELEMENTS OF YOUR MATRIX\n";
       for(int i=0;i<*row;i++)
       {
           for(int j=0;j<*colm;j++)
           {
               int temp;
               cin>>temp;
               if(i-j>=0)
               {
                   arr[count]=temp;
                   ++count;
               }
           }
       }
       count=0;
       for(int i=0;i<size;i++)
       {
           cout<<arr[count]<<" ";
           ++count;
       }
       cout<<endl;
       count=0;
       for(int i=0;i<*row;i++)
       {
           for(int j=0;j<*colm;j++)
           {
               if(i-j>=0)
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
