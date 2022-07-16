#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=n)
    {
        int mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key) //left
        {
            e=mid-1;
        } 
        else
        {
            s=mid+1;
        }

    }
    return -1;
}


int main()
{
    int arr[]={1,3,5,7,9,11};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    int index=binary_search(arr,n,key);
    if(index!=-1)
    {
        cout<<key << "is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<"is not found"<<endl;
    }
    return 0;

}