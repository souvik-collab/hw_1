#include<iostream>

using namespace std;

bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int j=2;j<n;j=j+1)
    {
        if (n%j == 0) 
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    int a,b;
    cout<<"enter the range start and end number ";
    cin>>a>>b;
    for(int i=a ;i<=b;i++)
    {
        if(prime(i))
        {
            cout<<i<<",";
        }
    }
    cout<<endl;
}