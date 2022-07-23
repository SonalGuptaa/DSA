#include<bits/stdc++.h>
using namespace std;
int kth_max(int arr[],int n,int k)
{
    sort(arr,arr+n ,greater<int>());
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={12,3,43,21,100,12,45,24};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    kth_max(arr,n,k);

}