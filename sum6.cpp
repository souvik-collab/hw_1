#include<iostream>
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
double kr(float a,int n)
{
    double ans=1;
    if(n==0){ans=1;}
    else
    {
        for(int i=1;i<=n;i++)
        {
            ans *= a+i-1;
        }
    }
    return ans;
}
double M(float a,float b,double x)
{
    double sum=1.0,term=1.0;
    int i=1;
    while(abs(term)>1e-10)
    {
        term=(kr(a,i)*pow(x,i))/(kr(b,i)*facto(i));
        sum += term;
        i++;
    }
    return sum;
    
}
int main(void)
{
    ofstream out("sum6.dat");
    float a=2,b=3,x;
    //cout<<M(a,b,x)<<"\t"<<exp(x)*M(b-a,b,-x)<<endl;
    for(x=-1;x<=1;x=x+0.01)
    {
        out<<x<<"\t"<<M(a,b,x)<<endl;
    }
}