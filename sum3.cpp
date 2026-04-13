#include<iostream>
using namespace std;

int main(void)
{
    int i,j,k,n=11;
    long double sum=0,sum1=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                if (i!=j && j!=k && k!=i)
                {
                    long double b=(i-j)*(j-k);
                    sum += 1.0/b;
                    long double p=i+j+k;
                    sum1 += p/b;
                }
            }
        }
    }
    cout<<sum<<"\t"<<sum1<<endl;
}