/*Given an array arr[] of N non-negative integers representing the height of blocks.
 If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 Example 1:
Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10    */
#include<iostream>
using namespace std;
long long trappingWater(int arr[], int n){
        long long result=0;
        int lmax[n],rmax[n];
         lmax[0]=arr[0];
         rmax[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(arr[i],lmax[i-1]);
        }
         for(int i= n-2;i>=0;i--)
        {
            rmax[i]=max(arr[i],rmax[i+1]);
        }
        for(int i=1;i<n-1;i++)
        {
            result=result+(min(lmax[i],rmax[i])-arr[i]);
        
        }
        return result;
    }
int main(void)
{
    int n=6;
    int arr[]={3,0,0,2,0,4};
    cout<<" water can be trapped between the blocks during the rainy season is==>"<<trappingWater(arr,n);

}
