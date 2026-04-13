#include<iostream>
using namespace std;
unsigned long long fibonacci(int x)
{
    unsigned long long f[100];
    f[0]=0,f[1]=1;
    for(int i=2;i<100;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[x];
    
    
}
int main(void)
{
    unsigned long long f[100],x=0;
    f[0]=0,f[1]=1;
    for(int i=2;i<100;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    int n=20;
    for(int i=0;i<=n;i++)
    {
        x=x+(f[i]*f[i]);
        
    }
    cout<<x<<"\t"<<(f[n]*f[n+1])<<endl;
    
    
}