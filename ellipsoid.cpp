#include<iostream>
#include<ctime>
using namespace std;
double f(float x,float y,float z)
{
    return ((pow(x,2)/4.0)+(pow(y,2)/9.0)+(pow(z,2)/16.0));  //a=2,b=3,c=4
}

int main(void)
{
    float x,y,z,x0=-2,x1=2,y0=-3,y1=3,z0=-4,z1=4;
    int count=0,n=1000000;
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        x=x0+(x1-x0)*rand()/float(RAND_MAX);
        y=y0+(y1-y0)*rand()/float(RAND_MAX);
        z=z0+(z1-z0)*rand()/float(RAND_MAX);
        if(f(x,y,z)<=1)
        {
            count++;
        }
    }
    double volume=(x1-x0)*(y1-y0)*(z1-z0)*float(count)/float(n);
    
    cout<<"The volume is "<<volume<<"\t"<<(4.0/3.0)*M_PI*2*3*4<<endl;
    
    return 0;
}
