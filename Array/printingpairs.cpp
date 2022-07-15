#include<iostream>
using namespace std;
void pairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        for(int j=i+1;j<n;j++)
        {
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    pairs(arr,n);
}