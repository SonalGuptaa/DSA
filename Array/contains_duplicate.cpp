#include<bits/stdc++.h>
using namespace std;
bool is_contain(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[]={1,23,33,34,21};
    int n=sizeof(arr)/sizeof(int);
    int ans=is_contain(arr,n);
    if(ans==1)
    {
        cout<<"Duplicates are present"<<endl;
    }
    else
    {
        cout<<"NO,Duplicates are present"<<endl;
    }
}