#include<iostream>
#include<fstream>
#include <cmath>
using namespace std;

long double facto(int x)
{
    double sum=1;
    for(int i=1;i<=x;i++)
    {
        sum *= i;
    } 
    return double(sum);
}
long double gamma(double x)
{
    double ans=1;
    if(x==1) ans=1;
    else if(x==0.5){ans=sqrt(M_PI);}
    else if(x<0)
    {
        cout<<"Wrong entry"<<endl;
        return -1;
    }
    else
    {
        for(double i=x-1;i>0;i--)
        {
            double term=i;
            
            ans *=term;
            //cout<<term<<" "<<ans<<endl;
            if(term==0.5)
            {
                
                ans *=sqrt(M_PI);
            }
            
        }
    }
    return ans;

}
double bessel(int v,double x)
{
    double sum=0,term=1;
    int n=0;
    while(abs(term)>1e-4)
    {
        term=pow((-pow(x,2)/4.0),n)/double(facto(n)*gamma(v+n+1));
        sum += term;
        n++;
    }
    return pow(x/2.0 ,v)*sum;

}
int main(void)
{
    double x0=-1,x1=1,dx=(x1-x0)/20.0;
    ofstream out("sum7.dat");
    for(double i=x0;i<=x1;i=i+dx)
    {
        out<<i<<"\t"<<bessel(1,i)<<endl;
    }
}