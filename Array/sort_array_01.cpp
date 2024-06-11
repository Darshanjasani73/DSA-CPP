#include<iostream>
using namespace std;
void array01(int arr[],int n)
{
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ++a;
        }
        else if(arr[i]==1)
        {
            ++b;
        }
    }
    int c=a+b;
    for(int i=0;i<a;i++)
    {
        arr[i]=0;
    }
    for(int i=a;i<c;i++)
    {
        arr[i]=1;
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
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
   // printarray(arr,n);
    cout<<endl;
    array01(arr, n);
    cout<<endl;
    printarray(arr,n);
    return 0;
}


