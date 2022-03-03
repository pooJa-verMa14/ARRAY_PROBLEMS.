#include<iostream>
using namespace std;


void DISPLAY(int *arr,int *n);
void INSERT(int *arr,int *n);
void DELETE(int *arr,int *n);
void SEARCH(int *arr,int *n);



int main()
{ 
    int arr[100],size,button;
    
    cout<<"\n Enter the Size OF ARRAY : ";
    cin>>size;
    for(int i = 0 ; i<size;i++)
    {
        cout<<"\n Enter the "<<i<<" value: ";
        cin>>arr[i];
    }
    cout<<endl;
    
    while(1)
    {
        cout<<"********MENU***********"<<endl;
        cout<<"| PRESS 0: TO DISPLAY  |\n| PRESS 1: TO INSERT   |\n| PRESS 2: TO SEARCH   |\n| PRESS 3: TO DELETE   |\n| PRESS 4: TO EXIT     |\n";
        cout<<"***********************"<<endl;
        cout<<"Enter: ";
       

        void (*fptr[10])(int *arr,int *n )={DISPLAY,INSERT,SEARCH,DELETE};
        cin>>button;
        if(button==4)
        {
            cout<<"YOUR SESSION HAS BEEN ENDED\n";
            break;
        }
        (*fptr[button])(arr,&size);
        cout<<endl;
    }   
}






void DISPLAY(int *arr,int *n)
{
    cout<<"\n YOU ARE IN DISPLAY\n";
    for(int i = 0 ; i<*n;i++)
    {
        
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}

void INSERT(int *arr,int *n) 
{
    cout<<"\n YOU ARE IN INSERT\n";
    int x, ind;
    cout<<"\n Enter the value to be inserted : ";
    cin >> x;
    cout<<"\n Enter the <index> where you want to insert: ";
    cin >> ind;
    for(int i =*n; i>=ind ;i--)
    {
        //cout<<"\n IN LOOP OF INSERT\n";
        arr[i+1]=arr[i];
    }
    arr[ind]=x;
    // Incrementing array size because it is Insert operation.
    ++*n;
    cout<<"\n INSERT END\n";

}

void DELETE(int *arr,int *n)
{ 
    int del;
    cout<<"\n YOU ARE IN DELETE\n";
    cout<<"ENTER THE INDEX WHOSE VALUE YOU WANT TO DELETE ==>";
    cin>>del;
    
    for(int i=del;i<*n;i++)
    {
        //cout<<"\n IN LOOP OF DELETE\n";
        arr[i]=arr[i+1];
    }
    --(*n);
    cout<<"\n DELETE END\n";

}

void SEARCH(int *arr,int *n)
{
    cout<<"\n YOU ARE IN SEARCH\n";
    int search;
    bool flag=0;
    cout<<"Enter the element you want to search: ";
    cin>>search;
    for(int i = 0;i< *n; i++ )
    {
        if(search==arr[i])
        {
            cout<<"Least search position of given element is: "<<i<<endl;
            flag=1;
            
        }
         
    }
    if(flag==0)
         {
             cout<<"The element does not exist in the Array"<<endl;

         }
    
    
}
