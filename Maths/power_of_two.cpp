#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfTwo(int n)
{
    bool a;
    if(n==0)
    {
        a=false;
    }
    else if(n==1)
    {
        a=true;
    }
    else
    {
        if(ceil(log2(n)) == floor(log2(n))) //to check it is a natural number
        {
            a=true;
        }
        else
        {
            a=false;
        }
    }
    return a;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=isPowerOfTwo(n);
    if(ans==true)
    {
        cout<<n<<" is a power of two."<<endl;
    }
    else
    {
        cout<<n<<" is not a power of two"<<endl;
    }
    
    

}