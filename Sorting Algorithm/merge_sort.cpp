 #include<bits/stdc++.h>
 using namespace std;
 void merge(vector<int> &arr,int s,int e)
 {
    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    vector<int> temp;
    while(i<= mid and j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    //copying remaining element from left part of array
    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    //Copying remaining element from right array
    while(j<=e)
    {
        temp.push_back(arr[j++]);
    }
    //copying in Orignal array
    int k=0;
    for(int idx=s;idx<=e;idx++)
    {
        arr[idx]=temp[k++];
    }
    return;
 }
 void mergesort(vector<int> &arr,int s,int e)
 {
    //base case
    if(s>=e)
    {
        return ;
    }
    //Recursion
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
 }
 int main()
 {
    vector<int> arr={12, 11, 13, 5, 6, 7};
    int s=0;
    int e=arr.size()-1;
    mergesort(arr,s,e);
    for(int x:arr)
    {
        cout<< x<< " ";
    }
    cout<<endl;
    return 0;
 }