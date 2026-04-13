#include<iostream>

using namespace std;

typedef struct cmplx
{
    int a;
    int b;
};

cmplx sum(cmplx a,cmplx b)
{
    cmplx c;
    c.a=a.a+b.a;
    c.b=a.b+b.b;
    return c;
}
cmplx sub(cmplx a,cmplx b)
{
    cmplx c;
    c.a=a.a-b.a;
    c.b=a.b-b.b;
    return c;
}
cmplx mul(cmplx a,cmplx b)
{
    cmplx c;
    c.a=(a.a*b.a)-(a.b*b.b);
    c.b=(a.a*b.b)+(a.b*b.a);
    
    return c;
}

int main(void)
{
    cmplx a,b,c,d,e;
    cout<<"complex a : ";
    cin>>a.a>>a.b;
    cout<<"complex b : ";
    cin>>b.a>>b.b;
    c=sum(a,b);
    d=sub(a,b);
    e=mul(a,b);
    cout<<c.a<<"+("<<c.b<<")i"<<endl;
    cout<<d.a<<"+("<<d.b<<")i"<<endl;
    cout<<e.a<<"+("<<e.b<<")i"<<endl;
}
