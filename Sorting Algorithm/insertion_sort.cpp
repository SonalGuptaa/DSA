#include<iostream>
using namespace std;
int insertion_sort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int current=arr[i];
        int prev=i-1; 
        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=current;
    }   
}

int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}