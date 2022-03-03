#include<iostream>
using namespace std;


int main()
{
  int size;
  cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
  cin>>size;
  int arr[size],flag=0;
  cout<<"ENTER THE ELEMENTS OF YOUR ARRAY";
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  } 
  int key,start=0,end=sizeof(arr)/4-1,mid=0;
  cout<<"\nENTER THE ELEMENT YOU WISH TO FIND IN THE ARRAY==>";
  cin>>key;
  int iteration=end;
  while(iteration!=0)
  {
    mid=(start+end)/2;
    if(arr[mid]==key)
    {
        cout<<"key found at "<<mid;
        flag=1;
        break;
    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    else if(key<arr[mid])
    {
        end=mid-1;
    }
    iteration=iteration/2;
  }
  if(flag==0)
  cout<<"key doen't found";
  

    return 0;
}


