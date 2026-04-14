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
    
    int x[3],m,n;
    cout<<"Three Numbers are : ";
    cin>>x[0]>>x[1]>>x[2];
    for(int j=0;j<2;j++)
    {
        for(int k =j;k<3;k++)
        {
            if(x[j]>x[k]){swap(x[j],x[k]);}
            
        }
    }
    cout<<x[2]<<endl;
    for( int i=0;i<=x[2];i++)
    {
        if((x[0]%i)==0 && (x[1]%i)==0 && (x[2]%i)==0)
        {
            m=i;
        }
    }
    cout<<m<<endl;
}