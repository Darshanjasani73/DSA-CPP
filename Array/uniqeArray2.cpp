#include<iostream>//only for one ANS.
using namespace std;
 void uniqeArray(int arr[],int n)
 {
     int ans = 0;
     for(int i=0;i<n;i++)
     {
         ans = ans ^ arr[i];
     }
     cout<<ans<<endl;
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
    uniqeArray(arr,n);
    return 0;
}
