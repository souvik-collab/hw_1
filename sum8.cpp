#include<iostream>
#include<fstream>

using namespace std;

double legendre(int n,double x)
{
    double p[n];
    p[0]=1;
    p[1]=x;
    for(int i=1;i<n;i++)
    {
        p[i+1]=((2*i+1)*x*p[i]/(i+1.0))-((i*p[i-1])/(i+1.0));
    }
    return p[n];
}
int main(void)
{
    double x0=-1,x1=1,dx=(x1-x0)/20.0;
    double dx1=(x1-x0)/200;
    ofstream out("sum8.dat");
    ofstream out1("sum8a.dat");
    for(double i=x0;i<=x1;i=i+dx)
    {
        out<<i<<"\t"<<legendre(5,i)<<endl;
    }
    for(double i=x0;i<=x1;i=i+dx1)
    {
        out1<<i<<"\t"<<legendre(5,i)<<endl;
    }
}
