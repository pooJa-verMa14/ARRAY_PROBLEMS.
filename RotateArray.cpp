//Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

#include<iostream>
using namespace std;
void reverse(int a[], int start, int end){
       while(start<end){
           int temp= a[start];
           a[start]=a[end];
           a[end]=temp;
           start++;
           end--;
       }
   }
void rotateArr(int arr[], int d, int n){
if(d<n){
   reverse(arr,0,(d-1));
   reverse(arr,d,(n-1));
   reverse(arr,0,(n-1));
   }
   else{
       if(d>n){
           d=d-n;
       reverse(arr,0,(d-1));
       reverse(arr,d,(n-1));
       reverse(arr,0,(n-1));
           
       }
   }
}

 int main(void)
    {
        int n;
        cout<<"ENTER THE NUMBER OF ELEMENTS==>";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cout<<"ENTER "<<i+1<<" ELEMENT==>";
            cin>>arr[i];
        }
        int k;
        cout<<"HOW MUCH ELEMENTS YOU WANT TO ROTATE: ";
        cin>>k;
        rotateArr(arr,k,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

      
    }   
