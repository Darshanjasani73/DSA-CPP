#include<iostream>
using namespace std;

void DuplicateArray(int arr[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicate Value: "<<arr[i]<<endl;
                count++;
            }

        }
    }
    if(count == 0)
    cout<<"Duplicate value not found"<<endl;

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
    DuplicateArray(arr,n);

    return 0;
}


