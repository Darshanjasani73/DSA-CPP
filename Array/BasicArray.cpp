#include<iostream>
using namespace std;
int main()
{
    int a[89] = {9,8,4,85,45,12};//after 6 value 0 value is printed.
    for(int i=0; i<60; i++)
    {
        cout<<a[i]<<endl;
    }
    int b[89];//print garbage value.
     for(int i=0; i<60; i++)
    {
        cout<<b[i]<<endl;
    }
}
