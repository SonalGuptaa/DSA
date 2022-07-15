#include<iostream>
using namespace std;
int sum_subarrays(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraySum=0;
            for(int k=i;k<=j;k++)
            {
               // cout<<arr[k] <<",";
               subarraySum +=arr[k];
            }
            largest=max(largest,subarraySum);
            cout<<endl;
        }
    }
    return largest;
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<< sum_subarrays(arr,n);


}