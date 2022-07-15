#include<iostream>
using namespace std;
void print_subarrays(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //cout<<"("<<i<<","<<j <<"),";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k] <<",";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    print_subarrays(arr,n);


}