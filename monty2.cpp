#include<iostream>
#include<ctime>
#include<cmath>

//for sphere
//for ellipsoid add a,b,c same like ellipse


using namespace std;

int main(void)
{
    float x0=-1,y0=-1,x1=1,y1=1,z0=-1,z1=1;
    float x,y,z;
    int n=100000,count=0,i;
    srand(time(NULL));
    for(i=0;i<=n;i++)
    {
        x=x0+((x1-x0)*rand()/RAND_MAX);
        y=y0+((y1-y0)*rand()/RAND_MAX);
        z=z0+((z1-z0)*rand()/RAND_MAX);
        if((pow(x,2)+pow(y,2)+pow(z,2))<=1)
        {
            count++;
        }
    }
    double volume = (z1-z0)*(x1-x0)*(y1-y0)*double(count)/double(n);
    cout<<volume<<"\t"<<(4.0/3.0)*M_PI<<endl;
}