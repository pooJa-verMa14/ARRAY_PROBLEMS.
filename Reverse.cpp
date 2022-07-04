#include<iostream>
using namespace std;

void reverse(int arr[],int n)
    {
        int low=0,high=n-1;
        while(low<high)
        {
            int temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;
        }
    }
    
    void printArray(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    int main(void)
    {
        int n=7;
        int arr[n]={1,2,3,4,5,6,7,8,9,10,11};
        reverse(arr,n);
        printArray(arr,n);
    }