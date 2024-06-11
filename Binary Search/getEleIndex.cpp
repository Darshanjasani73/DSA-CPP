#include<iostream>
using namespace std;
int pivotEleindex(int arr[],int n)
{
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int GetEleIndex(int arr[],int n,int key)
{
    int pivot = pivotEleindex(arr,n);
    int s = 0,mid = 0;
    int e = n - 1;
        if(arr[0]<=key)
        {
           e=pivot-1;
        }
        else if(pivot<=key)
        {
          s=pivot;
        }
        mid = s + (e-s)/2;
        while(s<=e)
        {
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]>key)
            {
                e=mid;
            }
            else
            {
                s=mid+1;
            }
            mid = s + (e-s)/2;
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
    cout<<"key: "<<endl;
    cin>>key;
    cout<<"index: "<<GetEleIndex(arr,n,key);
}


