#include<iostream>
#include<fstream>

using namespace std;
float a=28,b=(8.0/3.0),c=10;

double f1(float t,float x,float y,float z)
{
    return (-c*(x-y));
}
double f2(float t,float x,float y,float z)
{
    return (a*x-y-x*z);
}
double f3(float t,float x,float y,float z)
{
    return (b*(x*y-z));
}
int main(void)
{
    float t=0,x=1,y=1,z=1,h=0.001,k1,k2,k3,k4,p1,p2,p3,p4,g1,g2,g3,g4;
    ofstream out("ode_8_b.dat");
    for(t=-100;t<=50;t=t+h)
    {
        k1=h*f1(t,x,y,z);
        p1=h*f2(t,x,y,z);
        g1=h*f3(t,x,y,z);
        k2=h*f1(t+h/2,x+k1/2,y+p1/2,z+g1/2);
        p2=h*f2(t+h/2,x+k1/2,y+p1/2,z+g1/2);
        g2=h*f3(t+h/2,x+k1/2,y+p1/2,z+g1/2);
        k3=h*f1(t+h/2,x+k2/2,y+p2/2,z+g2/2);
        p3=h*f2(t+h/2,x+k2/2,y+p2/2,z+g2/2);
        g3=h*f3(t+h/2,x+k2/2,y+p2/2,z+g2/2);
        k4=h*f1(t+h,x+k3,y+p3,z+g3);
        p4=h*f2(t+h,x+k3,y+p3,z+g3);
        g4=h*f3(t+h,x+k3,y+p3,z+g3);
        
        x=x+(k1+2*k2+2*k3+k4)/6.0;
        y=y+(p1+2*p2+2*p3+p4)/6.0;
        z=z+(g1+2*g2+2*g3+g4)/6.0;
        
        out<<t<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    return 0;
}