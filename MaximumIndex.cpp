/*Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
 Example 1:

Input:
N = 2
A[] = {1, 10}
Output:
1
Explanation:
A[0]<A[1] so (j-i) is 1-0 = 1.
Example 2:

Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required 
condition(A[i] < A[j]) thus giving 
the maximum difference of j - i 
which is 6(7-1).*/

#include<iostream>
using namespace std;
int maxIndexDiff(int a[], int n) 
    { int max1=-1;
     
       for(int i=0;i<n;i++)
       {
          int j=n-1;
           while(j>=i)
           {
               if(a[i]<=a[j])
               {
                  max1=max(max1,j-i);
                  break;
               }
               j--;
           }
           
       }
       return max1;
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
      cout<<"MAXIMUM INDEX IS "<<maxIndexDiff(arr,n);
    }  
