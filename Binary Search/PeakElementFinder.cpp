#include<iostream>
using namespace std;
int Lpick(int arr[],int n)
{
    int i=0,mid=0,left=0;
    mid = (i + (--n))/2;
    int pickEle = arr[mid];
    while(i<mid)
    {
        mid = (0 + mid)/2;
        if(arr[mid]>pickEle)
        {
            pickEle=mid;
        }
        else
        {
            break;
        }

    }
    return pickEle;
}
int Rpick(int arr[],int n)
{
    int i=0,mid=0,right=0;
    n-=1;
    mid = (i + n)/2;
    int pickEle = arr[mid];
    mid++;
    while(mid<=n)
    {
        mid = (mid + n)/2;
        if(arr[mid]>pickEle)
        {
            pickEle=mid;
        }
        else
        {
            break;
        }

    }
    return pickEle;
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
    int a = Lpick(arr,n);
    int b = Rpick(arr,n);
    cout<<endl;
    if(a>b)
        cout<<a;
    else
        cout<<b;
    return 0;
}


