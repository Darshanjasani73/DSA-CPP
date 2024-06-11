#include<iostream>
using namespace std;

void FindMinArray(int arr[],int n)
{
    int min = arr[0];
    for(int i=1; i<n; i++)
    {
        if(min>=arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"min array: "<<min<<endl;
}

void FindMaxArray(int arr[],int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
    {
        if(max<=arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"max array: "<<max<<endl;
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
    int a[5] = {20,30,10,20,30};
    printarray(arr,n);
    FindMaxArray(arr,n);
    FindMinArray(arr,n);
    FindMaxArray(a,5);
    FindMinArray(a,5);



    return 0;
}
