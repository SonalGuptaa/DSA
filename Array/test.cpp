#include<iostream>
using namespace std;
int product_subarrays(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        int pro=1;
        for(int j=i;j<n;j++)
        {
            pro *=arr[j];
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