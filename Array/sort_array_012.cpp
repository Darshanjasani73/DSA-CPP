#include<iostream>
using namespace std;
void setArray(int arr[],int a,int b,int value)
{
    for(int i=a;i<b;i++)
    {
        arr[i]=value;
    }
}
void array01(int arr[],int n)
{
    int a=0,b=0,c=0,d=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            ++a;
        }
        else if(arr[i]==1)
        {
            ++b;
        }
        else if(arr[i]==2)
        {
            ++c;
        }
    }
     c=a+b;
     d=a+b+c;

     setArray(arr,0 ,a, 0);
     setArray(arr,a ,c, 1);
     setArray(arr,c ,d, 2);

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
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<endl;
    array01(arr, n);
    cout<<endl;
    printarray(arr,n);
    return 0;
}



