#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>

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
long double expo(float x)
{
    long double sum=1;
    long double term=1;
    int i=0;
    while(abs(term)>1e-5)
    {
    
        term *=x/double(i+1);
        sum += term;
       
        i++;
    }
    return sum;
}
long double cose(float x)
{
    long double sum=1;
    long double term=1;
    int i=1;
    while(abs(term)>1e-5)
    {
        term = pow(-1,i)*pow(x,2*i)/facto(2*i);
        sum += term;
        i++;
       // cout<<i<<" "<<term<<" "<<sum<<endl;
    }
    return sum;
}
long double sine(float x)
{
    long double sum=x;
    long double term=x;
    int i=0;
    while(abs(term)>1e-5)
    {
        term *= -pow(x,2)/double((2*i+3)*(2*i+2));
        sum += term;
        i++;
    }
    return sum;
}
long double tanhy(float x)
{
    long double a=expo(x);
    long double b=expo(-x);
    
    return ((a-b)/(a+b));
}

int main(void)
{
    float x[10]={0,12,24,36,-12,-34,50,60,-80,90};
    // cout<<fixed<<setprecision(4);
    // cout<<expo(x)<<"\t"<<exp(2)<<endl;
    // cout<<sine(x)<<"\t"<<sin(2)<<endl;
    // cout<<cose(x)<<"\t"<<cos(2)<<endl;
    // cout<<tanhy(x)<<endl;
    ofstream out("sum4a.dat");
    for(int i=0;i<10;i++)
    {
        out<<x[i]<<"\t"<<cose(x[i])<<endl;
    }
   
}