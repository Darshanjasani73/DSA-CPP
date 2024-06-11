#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int i=0,mid=0;
    mid = (i + (--n))/2;
    while(i<n)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            n=mid;
        }
        else if(arr[mid]<key)
        {
            i=mid+1;
        }
        mid = (i+n)/2;
    }
    return -1;
}
void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the values array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the array: "<<endl;
    printarray(arr,n);
    int key;
    cout<<"KEY: "<<endl;
    cin>>key;
    cout<<binary_search(arr,n,key);

    return 0;
}


