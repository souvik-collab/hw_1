#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

int main(void)
{
    float x0=-1,y0=-1,x1=1,y1=1;
    float x,y;
    int n=100000,count=0,i;
    srand(time(NULL));
    for(i=0;i<=n;i++)
    {
        x=x0+((x1-x0)*rand()/RAND_MAX);
        y=y0+((y1-y0)*rand()/RAND_MAX);
        if((pow(x,2)+pow(y,2))<=1)
        {
            count++;
        }
    }
    double area = (x1-x0)*(y1-y0)*double(count)/double(n);
    cout<<area<<endl;
}