#include<iostream>
using namespace std;

void Pairsum(int arr[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==key)
            {
                 cout<<"["<<arr[i]<<" , "<<arr[j]<<"]"<<endl;
            }
        }
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
    int key;
    cout<<"enter the key :"<<endl;
    cin>>key;
    cout<<endl;
    Pairsum(arr,n,key);
    return 0;
}

