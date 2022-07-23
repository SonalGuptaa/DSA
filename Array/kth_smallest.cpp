#include<bits/stdc++.h>
using namespace std;
int k_small(int arr[],int n,int k)
{
    sort(arr,arr+n);
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={12,32,123,10,3,324,1};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    k_small(arr,n,k);
}