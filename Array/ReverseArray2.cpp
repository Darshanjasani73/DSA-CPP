#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void reverseArray(int arr[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        if(i==(n-i-1))break;
        swap(arr[i],arr[n-i-1]);
    }
    printarray(arr,n);
}
int main()
{
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printarray(arr,n);
    cout<<endl;
    reverseArray(arr,n);
    cout<<endl;
    return 0;
}
