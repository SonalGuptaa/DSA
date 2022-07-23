#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,7,1,2,8,4,5};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    cout<<"Missing number is: ";
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]==2)
        cout<<arr[i+1]-1;
    }
}