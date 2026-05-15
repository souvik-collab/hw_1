#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

double f(float x,float y)
{
    return (pow(x,2)+3*x*y+pow(y,2));
}

int main(void)
{
    float x0=-5,y0=-3,x1=5,y1=7;
    float x,y,sum=0;
    int n=1000000,count=0,i;
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