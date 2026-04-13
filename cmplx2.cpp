#include<iostream>
#include<cmath>
using namespace std;

typedef struct cmplx
{
    float a;
    float b;
};
void sqr(cmplx x)
{
    cmplx c,d;
    double theta= atan2(x.b,x.a);
    double r= sqrt(pow(x.a,2)+pow(x.b,2));
    c.a=sqrt(r)*cos(theta/2.0);
    c.b=sqrt(r)*sin(theta/2.0);
    d.a=sqrt(r)*cos((theta+2*M_PI)/2.0);
    d.b=sqrt(r)*sin((theta+2*M_PI)/2.0);
    cout<<c.a<<"+("<<c.b<<")i"<<endl;
    cout<<d.a<<"+("<<d.b<<")i"<<endl;
}
void cbr(cmplx x)
{
    cmplx c,d,e;
    double theta= atan2(x.b,x.a);
    double r= sqrt(pow(x.a,2)+pow(x.b,2));
    c.a=pow(r,1/3.0)*cos(theta/3.0);
    c.b=pow(r,1/3.0)*sin(theta/3.0);
    d.a=pow(r,1/3.0)*cos((theta+2*M_PI)/3.0);
    d.b=pow(r,1/3.0)*sin((theta+2*M_PI)/3.0);
    e.a=pow(r,1/3.0)*cos((theta+4*M_PI)/3.0);
    e.b=pow(r,1/3.0)*sin((theta+4*M_PI)/3.0);
    cout<<c.a<<"+("<<c.b<<")i"<<endl;
    cout<<d.a<<"+("<<d.b<<")i"<<endl;
    cout<<e.a<<"+("<<e.b<<")i"<<endl;
}

int main(void)
{
    cmplx a,b,c,d,e;
    cout<<"complex a : ";
    cin>>a.a>>a.b;
    // cout<<"complex b : ";
    // cin>>b.a>>b.b;
    cbr(a);
}