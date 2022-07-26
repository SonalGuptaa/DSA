#include<bits/stdc++.h>4
using namespace std;
void max_min(int arr[],int n)
{
    sort(arr,arr+n);
    cout<<"Minimium Element is :"<< arr[0] <<endl;
    cout<<"Maximum Element is  :"<< arr[n-1] <<endl;
}
int main()
{
    int arr[]={12,23,54,121,34,133,132,23};
    int n=sizeof(arr)/sizeof(int);
    max_min(arr,n);
    return 0;
}