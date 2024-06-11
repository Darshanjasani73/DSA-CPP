#include<bits/stdc++.h>
using namespace std;
bool checkNum(int arr[],int n)
{
    int df=-9000;
    int count;
    for(int i=0; i<n; i++)
    {
        int k=0;
        count = 1;
        int j=i+1;
        while(j<n)
        {
            if(arr[i]==df)
            {
                j++;
            }
            else if(arr[i]==arr[j])
            {
                count++;
                j++;
                arr[j]=df;
            }
            else
            {
                j++;
            }
        }
        int a[k]=count;
        k++;
    }
    int i=0,j=0;
    while(i<a.size())
    {
        if(a[i]!=a[i+1]){
            i++;
            j++;
        }
    }
    if(j==(a.size)-1)
    {
        return true;
    }
    else
    {
        return false;
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
    cout<<checkNum(arr,n);
    return 0;
}


