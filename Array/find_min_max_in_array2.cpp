#include<iostream>
using namespace std;
void FindMaxMinArray(int arr[],int n)
{
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(min>=arr[i])
        {
            min=arr[i];
        }
        else if(max<=arr[i])
        {
            max=arr[i];
        }

    }
    cout<<"Max Array is: "<<max<<endl<<"Min Array is: "<<min<<endl;
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
    printarray(arr,n);
    FindMaxMinArray(arr,n);

    return 0;
}
