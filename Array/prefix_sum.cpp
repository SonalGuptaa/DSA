#include<iostream>
using namespace std;
int prefix(int arr[],int n)
{
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=0;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraySum= i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            largest=max(largest,subarraySum);
        }
    }
    return largest;
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
   // cout<<"The largest subarray sum is :";
    cout<<prefix(arr,n);

}