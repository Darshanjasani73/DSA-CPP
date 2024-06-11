#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void swapValues(int arr[],int n)
{
    int a;

    for(int i=0; i<n; i+=2)
    {
        if(i==(n-1))
        {
            break;
        }
        int j=i+1;
        swap(arr[i],arr[j]);
    }
    printArray(arr,n);

}
int main()
{
    int n;
    cout<<"enter the length of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printArray(arr,n);
    cout<<endl;
    swapValues(arr,n);
    return 0;
}
