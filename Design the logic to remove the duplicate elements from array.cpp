#include<iostream>
using namespace std;

void DISPLAY(int *arr,int *n);
void DELETE(int *arr,int *n,int delt);
void REMDUP(int *arr,int *n);
void CREATE(int *arr,int *n);

int main(void) 
{
    int size, arr[100];
    cout<<"ENTER THE SIZE OF ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);

    cout<<"INTIALLY YOUR ARRAY\n";
    DISPLAY(arr,&size);

    REMDUP(arr,&size);

    cout<<"AFTER DELETING DUBLICATE ELEMENTS YOUR ARRAY\n";
    DISPLAY(arr,&size);
}



void DELETE(int *arr,int *n,int delt)
{
    for(int i=delt;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
    --(*n);

}

void DISPLAY(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"VALUE AT "<<i<<" INDEX==> ";
        cout<<arr[i];
        cout<<endl;

    }

}

void REMDUP(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        for(int j=i+1;j<*n;j++)
        {
            if(arr[i]==arr[j])
            {
                DELETE(arr,&(*n), j);
                j--;
            }
        }
    }

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


