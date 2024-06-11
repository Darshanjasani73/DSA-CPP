#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<=arr[i]){
            max = arr[i];
        }
    }
    cout<<"max num: "<<max;
    return 0;
}

