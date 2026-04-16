#include<iostream>
#include<cmath>

using namespace std;

double f(float x)
{
    return pow(x,5)*exp(-x);
}

double simp13(float a,float b,int n)
{
    double sum=f(a)+f(b);
    double h=(b-a)/double(n);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum += 2*f(a+i*h);
        }
        else
        {
            sum += 4*f(a+i*h);
        }
    }
    return (h/3.0)*sum;
}
double precision(float a,float b)
{
    int n=100;
    float i1=0,i2=1;
    while(abs(i1-i2)>1e-5)
    {
        i2=i1;
        i1=simp13(a,b,n);
        n=n*2;
    }
    return i2;
}
int main(void)
{
    float initial=0,final1=1,sum1=0,sum2=1;
    while(abs(sum1-sum2)>1e-5)
    {
        sum2=sum1;
        sum1 += precision(initial,final1);
        initial=final1;
        final1=final1+1;
    }
    cout<<sum1<<endl;
}