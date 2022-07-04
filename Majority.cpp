/*Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. 
If both elements have the same frequency, then return the smaller element
Input:
N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5
Output: 4
Explanation: 
frequency of 4 is 4.
frequency of 5 is 1.                */

#include<iostream>
using namespace std;


 int majorityWins(int arr[], int n, int x, int y)
    {
        int count1=0,count2=0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]==x) count1++;
            if(arr[i]==y) count2++;
        }
        if(count1>count2) return x;
        else if(count2>count1) return y;
        else if(count1==count2)
        {
            if(x<y) return x;
            else return y;
        }
        
    }

int main()
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
        cout<<"FROM TWO ELEMENTS X AND Y FIND WHICH ELEMENT OCCURED MAJORITY OF TIMES"<<endl;
        int x;
        int y;
        cout<<"ENTER THE VALUE OF X==>"<<endl;
        cout<<"ENTER THE VALUE OF Y==>";
        cin>>x;
        cin>>y;
        
        cout<<"AN ELEMENT OCCURED MAJORITY OF TIMES IS :  "<<majorityWins(arr,n,x,y);;
      

      
    }   
