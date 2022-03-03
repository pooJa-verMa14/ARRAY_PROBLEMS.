#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
void REV(int *arr,int *n);

int main(void)
{
    int size, arr[100];
    cout<<"ENTER THE SIZE OF ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);
    cout<<"INITIALLY YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
    REV(arr,&size);
    
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
void DISPLAY(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"VALUE AT "<<i<<" INDEX==> ";
        cout<<arr[i];
        cout<<endl;

    }

}
void REV(int *arr,int *n)
{
    int b[100];
    for(int i=0;i<*n;i++)
    {
        b[i]=arr[(*n-1)-i];
    }
    for(int i=0;i<*n;i++)
    {
        arr[i]=b[i];
    }
    
    cout<<"AFTER REVERSING YOUR ARRAY\n";
    DISPLAY(arr,n);


}
