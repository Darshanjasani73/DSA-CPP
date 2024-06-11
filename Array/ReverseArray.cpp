#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    cout<<"reverse array: "<<endl;
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }
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
    reverseArray(arr,n);


    return 0;
}

