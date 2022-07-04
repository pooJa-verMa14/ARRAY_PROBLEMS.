/*Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.*/
#include<iostream>
using namespace std;
  long long maxSubarraySum(int arr[], int n){
        
        long long res=arr[0];
        long long sum=arr[0];
        for(int i=1;i<n;i++)
        {
            sum=max(sum+arr[i],(long long)arr[i]);
            res=max(sum,res);
        }
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
        cout<<"MAXIMUM SUBARRAY SUM IS :"<<maxSubarraySum(arr,n);

      
    }   