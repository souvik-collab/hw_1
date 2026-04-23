#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;
double w=1.01,w1=0.0,w0=1.0;
double f1(float t,float y,float z) //y
{
    return z;
}
double f2(float t,float y,float z) //z
{
    return (-w*y+w0+w1*pow(y,2));
}

int main(void)
{
    ofstream out("ode_6a1.dat");

    // Initial Conditions chosen for Q < 0 ,here t=theta,y=u, du/d_theta=z
    // Example: u(0)=1.2, u'(0)=0 leads to Q = (1/2)*(1.2^2) - 1.2 = 0.72 - 1.2 = -0.48

    double t=0,y=0.9,z=0,h=0.001,k1,k2,k3,k4,p1,p2,p3,p4;
    for(t=0;t<=(20*2.0*M_PI);t=t+h)
    {
        k1=h*f1(t,y,z);
        p1=h*f2(t,y,z);

        k2=h*f1(t+h/2.0,y+k1/2.0,z+p1/2.0);
        p2=h*f2(t+h/2.0,y+k1/2.0,z+p1/2.0);

        k3=h*f1(t+h/2.0,y+k2/2.0,z+p2/2.0);
        p3=h*f2(t+h/2.0,y+k2/2.0,z+p2/2.0);

        k4=h*f1(t+h,y+k3,z+p3);
        p4=h*f2(t+h,y+k3,z+p3);

        y += (k1+2*k2+2*k3+k4)/6.0;
        z += (p1+2*p2+2*p3+p4)/6.0;
        double r=1.0/y;
        out<<t<<"\t"<<r<<"\t"<<y<<"\t"<<z<<endl;
    }
    return 0;
}