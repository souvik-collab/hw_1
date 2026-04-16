#include<iostream>
#include<cmath>

using namespace std;

double f(float x)
{
    return (sin(x))/x;
}
double trapezoidal(float a,float b,int n)
{
    float sum=0;
    sum=f(a)+f(b);
    float h=(b-a)/float(n);
    for(int i=1;i<n;i++)
    {
        sum += 2*f(a+(i*h));
    }
    return (h/2.0)*sum; 
}
double precision(float a,float b)
{
    int n=100;
    double i1,i2=1e4;
    i1=trapezoidal(a,b,n);
    while(abs(i1-i2)>1e-6)
    {
        i1=i2;
        n=n*2;
        i2=trapezoidal(a,b,n);
    }
    return i2;
}
int main(void)
{
    float mid1,sum1=0,sum2=1,a=0,b=1,c=2,sum3=0,sum4=1;
    while(abs(sum1-sum2)>1e-4)
    {
        sum2=sum1;
        mid1=(b+a)/2.0;
        sum1 += precision(mid1,b);
        b=mid1;
    }
    // //sum2
    float ini=1;
    while(abs(sum3-sum4)>1e-4)
    {
        sum4=sum3;
        sum3 += precision(ini,c);
        ini=c;
        c=c+2;
    }
    
    // //sum4
    cout<<(sum2+sum4)<<"\t"<<M_PI/2.0<<". "<<c<<endl;
    
}