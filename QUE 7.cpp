#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
int Cdiff(int *arr,int *n);

int main(void)
{
    int size, arr[100],comdiff;
    cout<<"ENTER THE SIZE OF ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);
    comdiff = Cdiff(arr,&size);
    if(comdiff==-1)
    {
        cout<<"NO ELEMENT IS MISSING\n";
    }
    else
    {
        cout<<"COMMAN DIFFERENCE btw EVERY TWO CONSECUTIVE ELEMENTS IN ARRAY IS==>"<<comdiff<<endl;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i+1]-arr[i]!=comdiff)
        cout<<"MISSING ELEMENT IS==>"<<arr[i]+comdiff<<"\nAT INDEX==>"<<i+1<<endl;
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
void DISPLAY(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"VALUE AT "<<i<<" INDEX==> ";
        cout<<arr[i];
        cout<<endl;

    }

}
int Cdiff(int *arr,int *n)
{
    int diff1,diff2,diff3;
    if(*n<=2)
    {
        return -1;

    }
    else 
    {
        for(int i=0;i<*n-1;i++)
    {
        
        diff1=arr[i+1]-arr[i];
        diff2=arr[i+2]-arr[i+1];
        diff3=arr[i+3]-arr[i+2];
         if(diff1==diff2)
        {
            return diff1;
        }
        else if(diff2==diff3)
        {
            return diff2;
        }
        
        
    }

    }
    
}
