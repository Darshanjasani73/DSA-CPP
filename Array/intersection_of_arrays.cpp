#include<bits/stdc++.h>
using namespace std;
void INTarray(int arr1[],int arr2[], int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]==arr2[j])
        {
           cout<<arr1[i]<<endl;
           i++;
           j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
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
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    printarray(arr1,n1);
    cout<<endl;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    printarray(arr2,n2);
    cout<<endl;
    cout<<endl;
    INTarray(arr1,arr2,n1,n2);
    return 0;
}

