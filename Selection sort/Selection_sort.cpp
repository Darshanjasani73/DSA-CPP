#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    SelectionSort(arr,n);
    return 0;
}
