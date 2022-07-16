#include<iostream>
using namespace std;
int modify(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[s]<arr[mid])  //left part sorted
        {
            if(key>=arr[s] && key<arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }

        }
        else //right part sorted
        {
            if(key>arr[mid] && key<=arr[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }

        }
    }
    return -1;
}
int main()
{
    int arr[]={3,1};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    int index=modify(arr,n,key);
    if(index!=-1)
    {
        cout<<key  <<"is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<"is not found"<<endl;
    }
    return 0;}