#include<iostream>
using namespace std;

float sum(int n,int k)
{
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum += pow(i,k);
    }
    return sum;
}
int main (void)
{
    int n=1000000, k1=-2,k2=-8,k3=-1,k4=0,k5=1;
    cout<<sum(n,k1)<<"\t"<<sum(n,k2)<<endl;
    cout<<sum(n,k3)<<"\t"<<sum(n,k4)<<endl;
    cout<<sum(n,k5)<<endl;
}