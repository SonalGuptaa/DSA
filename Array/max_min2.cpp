#include<bits/stdc++.h>
using namespace std;
void max_min(int arr[],int n)
{
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Maximum Element is :"<<max;
    cout<<"Minimum Element is :"<<min;
}
int main()
{
    int arr[]={10,30,50,20,40,2};
    int n=sizeof(arr)/sizeof(int);
    max_min(arr,n);
}