#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int x=sqrt(n);
    cout<<trunc(x); //trunc() takes only a single argument
}