#include<iostream>
using namespace std;
void insertionSort(int *arr,int *n)
{
    int i,j;
    for( i=1;i<*n;i++)
    {
        int key=arr[i];
        for( j=i-1;j>=0 && arr[j]>key ;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}





int median(int a[],int n)
    {
        //If median is in fraction then convert it to integer and return
        insertionSort(a,a+n);
        int mid=(n-1)/2;
        if(n%2!=0)
        {
            return a[mid];
        }
        else
        {
            int x=(a[mid]+a[mid+1])/2;
            return x;
        }
        
    
    }
    //Function to find mean of the array elements.
    int mean(int arr[],int N)
    {
       int  sum=0;
        for(int i=0;i<N;i++)
        {
           sum=sum+arr[i]; 
        }
        int d=sum/N;
        return d;
        
    }
    int main(void)
    {
        int n;
        cout<<"ENTER THE NUMBER OF ELEMENTS==>";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int Mean=mean(arr,n);
        cout<<"MEAN IS: "<< Mean <<endl;
        int Median=median(arr,n);
          cout<<"MEDIAN IS: "<< Median <<endl;       

    }