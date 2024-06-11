#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
               if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
               }
        }
    }
     printarray(arr,n);
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
    cout<<endl;
    printarray(arr,n);
    cout<<endl;
    bubbleSort(arr,n);
    return 0;
}

