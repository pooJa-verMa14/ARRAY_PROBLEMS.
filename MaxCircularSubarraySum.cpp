/*Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.
Example 1:

Input:
N = 7
arr[] = {8,-8,9,-9,10,-11,12}
Output:
22
Explanation:
Starting from the last elementof the array, i.e, 12, and moving in a circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, which gives maximum sum as 22*/
#include<iostream>
using namespace std;
 int normalmaxsum(int arr[], int n){
        
        int res=arr[0];
        int sum=arr[0];
        for(int i=1;i<n;i++)
        {
            sum=max(sum+arr[i],arr[i]);
            res=max(sum,res);
        }
        return res;
        
    }
int circularSubarraySum(int arr[], int n){
        
        int maxnormal=normalmaxsum(arr,n);
        if(maxnormal<0) return maxnormal;
        int arrsum=0;
         for(int i=0;i<n;i++)
         {
             arrsum=arrsum+arr[i];
             arr[i]=-arr[i];
             
         }
         int maxcircular=arrsum + normalmaxsum(arr,n);
         int res=max(maxnormal,maxcircular);
         return res;
      
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
        cout<<"MAX CIRCULAR SUBARRAY SUM :"<<circularSubarraySum(arr,n);

      
    }