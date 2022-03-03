#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void BUB(int*arr,int *n);
void DISPLAY(int *arr,int *n);

int main(void)
{
    int arr[100],size;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    CREATE(arr,&size);
    BUB(arr,&size);
    DISPLAY(arr,&size);    

}


void CREATE(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"ENTER THE "<<i<<" VALUE==> ";
        cin>>arr[i];
        cout<<endl;

    }
}

void BUB(int*arr,int *n)
{
    int count=0;
    for(int i=0;i<*n;i++)
    {
        
        
        for(int j=i+1;j<*n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
                count++;

            }
            
        }
        if(count==0)
        {
            cout<<"OPTIMIZED BUBBLE SORT";
            break;
        }
    }

}

void DISPLAY(int *arr,int *n)
{
    
    for(int i = 0 ; i<*n;i++)
    {
        
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}
