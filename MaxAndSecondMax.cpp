#include<bits/stdc++.h>

using namespace std;


vector<int> largestAndSecondLargest(int n, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=max)
            {
                if(arr[i]>max2)
                {
                    max2=arr[i];
                }
            }
        }
        v.push_back(max);
        if(max2==INT_MIN)
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(max2);
        }
        return v;
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
       vector<int> v= largestAndSecondLargest( n,  arr);
        cout<<"MAX IS: "<<v[0]<<endl<<"SECOND MAX IS :"<<v[1];
    }    