#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double a=15.6,b=1,c=28,d=0;

double f(double x) {
   double absX = fabs(x);
    double res;

    // Defined for positive X as per your question
    if (absX < 1.0) {
        res = -absX;
    } 
    else if (absX >= 1.0 && absX <= 10.0) {
        res = -1.0 - (0.636 * (absX - 1.0));
    } 
    else { // absX > 10
        res = (10.0 * (absX - 10.0) - 6.724);
    }

    // Apply the odd property: f(-X) = -f(X)
    return (x >= 0) ? res : -res;
}
double f1(double t,double x,double y,double z)
{
    return (a*(y-x)-f(x));
}
double f2(double t,double x,double y,double z)
{
    return (b*(a*(x-y)+z));
}
double f3(double t,double x,double y,double z)
{
    return (-c*(y+d*z));
}
int main(void)
{
    double t=0,x=0.1,y=0,z=0,h=0.001,k1,k2,k3,k4,p1,p2,p3,p4,g1,g2,g3,g4;
    ofstream out("ode_8_c.dat");
    for(t=0;t<=100;t=t+h)
    {
    
        k1=h*f1(t,x,y,z);
        p1=h*f2(t,x,y,z);
        g1=h*f3(t,x,y,z);
        k2=h*f1(t+(h/2.0),x+(k1/2.0),y+(p1/2.0),z+(g1/2.0));
        p2=h*f2(t+(h/2.0),x+(k1/2.0),y+(p1/2.0),z+(g1/2.0));
        g2=h*f3(t+(h/2.0),x+(k1/2.0),y+(p1/2.0),z+(g1/2.0));
        k3=h*f1(t+(h/2.0),x+(k2/2.0),y+(p2/2.0),z+(g2/2.0));
        p3=h*f2(t+(h/2.0),x+(k2/2.0),y+(p2/2.0),z+(g2/2.0));
        g3=h*f3(t+(h/2.0),x+(k2/2.0),y+(p2/2.0),z+(g2/2.0));
        k4=h*f1(t+h,x+k3,y+p3,z+g3);
        p4=h*f2(t+h,x+k3,y+p3,z+g3);
        g4=h*f3(t+h,x+k3,y+p3,z+g3);
        
        x += (k1+2*k2+2*k3+k4)/6.0;
        y += (p1+2*p2+2*p3+p4)/6.0;
        z += (g1+2*g2+2*g3+g4)/6.0;
        
        out<<t<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    return 0;
}