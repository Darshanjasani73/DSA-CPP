#include<iostream>
using namespace std;
bool CheckPalindrom(int arr[],int n)
{
    int i=0;
    for(i=0; i<n/2; i++)
    {
        if (arr[i] == arr[n - i - 1]){}
        else
        {
            return 0;
        }
    }
    return 1;
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
    cout<<endl;
    cout<<CheckPalindrom(arr,n)<<endl;
    return 0;
}

