#include<iostream>
using namespace std;
int product_subarrays(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int pro=1;
            for(int k=i;k<=j;k++)
            {
               // cout<<arr[k] <<",";
               pro *=arr[k];
            }
            largest=max(largest,pro);
        }
    }
    return largest;
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The max Subarray product is : "<<endl;
    cout<<  product_subarrays(arr,n);


}