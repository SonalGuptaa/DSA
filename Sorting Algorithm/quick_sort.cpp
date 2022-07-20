#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &a, int s, int e)
{
    int i=s-1;
    int pivot=a[e];
    for(int j=s;j<e;j++)
    {
        if(a[j] < pivot) { 
            i++;
            swap(a[i],a[j]);
        }
    }
        swap(a[i+1],a[e]); //Place pivot element at correct place
        return i+1;
}
void quicksort(vector<int> &a ,int s,int e)
{   //base case
    if(s>=e){
        return;
    }
    //recursion case
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main()
{
    vector<int> a{11,22,34,43,566,23,13,124,324};
    int n = a.size();
    quicksort(a,0,n-1);
    for(int x : a) {
        cout<< x <<" ";
    }
    return 0;
}