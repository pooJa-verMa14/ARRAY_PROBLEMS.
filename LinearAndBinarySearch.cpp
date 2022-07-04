#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int bSearch(int arr[],int n,int start,int end,int num)// it can only be apllied is array is sorted
{
    if(start>end) return -1;
    int mid=(start+end)/2;
    if(num==arr[mid]) return mid;
    else if(arr[mid]>num)
    {
         return bSearch(arr,n,start,mid-1,num);
    }
    else
    {
        return bSearch(arr,n,mid+1,end,num);
    }
}

int main(void)
{
    int arr[5]={19,23,34,45,56};
    int x=4;
    int temp=linearSearch(arr,5,x);
    if(temp!=-1)
    {
        cout<<x<<" IS FOUND AT INDEX  "<<temp+1;
    }
    else
    {
        cout<<"ELEMENT NOT FOUNd\n";
    }

    int y=56;
    cout<<y<<" IS AT LOCATION "<<bSearch(arr,5,0,4,y)+1;
}
