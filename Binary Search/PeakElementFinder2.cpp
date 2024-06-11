#include<iostream>
using namespace std;
int pickEleIndex(int arr[],int n)
{
    n-=1;
    int mid = 0,i=0,ans=0;
    mid = (i+n)/2;
    while(i<n)
    {
        if(arr[mid]<arr[mid+1])
        {
            ans = mid + 1;
            i=mid+1;
        }
        else
        {
            n=mid;
        }
        mid = (i+n)/2;
    }
    return ans;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"num: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printarray(arr,n);
    cout<<endl;
    cout<<"index: "<<pickEleIndex(arr,n);
}
