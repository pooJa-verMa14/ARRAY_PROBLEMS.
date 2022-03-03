#include<iostream>
using namespace std;

void SYMM(int *arr,int *row,int *colm);

int main(void)
{
    int arr[100],row,colm;
    cout<<"ENTER ROWS OF YOUR  MATRIX==>";
    cin>>row;
    cout<<"\nENTER COLUMN OF YOUR MATRIX==>";
    cin>>colm;
    SYMM(arr,&row,&colm);
}


void SYMM(int *arr,int *row,int *colm)
{
    int count1=0,count2=0,i,j;
    int size=3*(*row)-3;
    if(*row!=*colm)
    {
        cout<<"FOR SYMMETRIC MATRIX ROW AND COLM MUST BE SAME\n";
    }
    else
    {
         cout<<"ENTER ELEMENTS OF SYMMETRIC MATRIX\n";
         for( i=0;i<*row;i++)
         {
            for( j=0;j<*colm;j++)
            {
                int temp;
                cin>>temp;
                if(i-j>=0)
                {
                    arr[count1]=temp;
                    ++count1;
                }
            }
         }
        count1=0;
        for( i=0;i<size;i++)
        {
            cout<<arr[count1]<<" "<<endl;
            ++count1;
        }
        

  for( i=0; i<*row; i++)
  {
      for(j=0; j<*colm; j++)
      {
          if(j < i)
          {
              int k1=(i*(i+1)/2)+j;
              cout<<arr[k1]<<" ";
          }
          else
          {
              int k2=(j*(j+1)/2)+i;
              cout<<arr[k2]<<" ";
          }
       }
       cout<<endl;
  }
}
}
