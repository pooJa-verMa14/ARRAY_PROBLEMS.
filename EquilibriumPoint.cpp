/*Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.*/

#include<iostream>
using namespace std;

    int equilibriumPoint(int a[], int n) {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum-a[i];
        if(sum==leftsum)
        {
            return i+1;
        }
        else
        {
            leftsum=leftsum+a[i];
        }
    }
    return -1;


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
      cout<<"EQUILIBRIUM POINT IS "<<equilibriumPoint(arr,n);
    }    