#include<iostream>  //only 1 to n.
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void duplicateArray(int arr[],int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans = ans^arr[i];
    }
    for(int i=0; i<n; i++)
    {
        ans = ans^i;
    }

    cout<<ans<<endl;
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
    duplicateArray(arr,n);
    return 0;
}
