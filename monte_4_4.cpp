#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

double f(float x,float y)
{
    return exp(-x*y)*sin(x*x*y*y);
}

int main(void)
{
    float x0=0,y0=0,x1=2,y1=2;
    float x,y,sum=0;
    int n=100000,count=0,i;
    srand(time(NULL));
    for(i=0;i<=n;i++)
    {
        x=x0+((x1-x0)*rand()/RAND_MAX);
        y=y0+((y1-y0)*rand()/RAND_MAX);
        sum += f(x,y);
        
    }
    double area = (x1-x0)*(y1-y0)*sum/float(n);
    cout<<area<<endl;
}