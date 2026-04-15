#include<iostream>
#include<cmath>
using namespace std;

struct vec
{
    float i,j,k;
};

float dotpro(vec a, vec b)
{
    vec c;
    c.i=a.i*b.i;
    c.j=a.j*b.j;
    c.k=a.k*b.k;
    return (c.i+c.j+c.k);
}
vec crosspro(vec a,vec b)
{
    vec c;
    c.i=a.j*b.k-a.k*b.j;
    c.j=a.k*b.i-a.i*b.k;
    c.k=a.i*b.j-a.j*b.i;
    return c;
}
vec consmul(vec a,float b)
{
    vec c;
    c.i=a.i*b;
    c.j=a.j*b;
    c.k=a.k*b;
    return c;
}
int main(void)
{
    vec a,d,b;
    vec c,g1,g2,g3;
    float n,factor;
    cout<<"Vector a components : ";
    cin>>a.i>>a.j>>a.k;
    cout<<"Vector b components : ";
    cin>>b.i>>b.j>>b.k;
    cout<<"Vector c components : ";
    cin>>c.i>>c.j>>c.k;
    d=crosspro(b,c);
    n=dotpro(a,d);
    factor=2.0*M_PI/n;
    g1=consmul(crosspro(b,c),factor);
    g2=consmul(crosspro(c,a),factor);
    g3=consmul(crosspro(a,b),factor);
   
    //cout<<c<<"\n";
    cout<<"\t\t\t"<<"Reciprocal Lattice Vectors are given below -:- \n";
    cout<<"g1 = ("<<g1.i<<")i + ("<<g1.j<<")j + ("<<g1.k<<")k"<<endl;
    cout<<"g2 = ("<<g2.i<<")i + ("<<g2.j<<")j + ("<<g2.k<<")k"<<endl;
    cout<<"g3 = ("<<g3.i<<")i + ("<<g3.j<<")j + ("<<g3.k<<")k"<<endl;
}