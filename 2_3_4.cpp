#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;
double ax=1;
double ay=1;
double fx=1;
double fy=1;
double hn(double n,double x)
{
    double k=0;
    if(n==0){return (1.0);}
    if(n==1.0){return (2*x);}
    if(n==2.0){return (4*pow(x,2)-2);}
    if(n==3.0){return (8*pow(x,3)-(12*x));}
    else
        {cout<<"doesnt give the value"<<endl;
         return k;  }
}
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans *= i ;
    }
    return double(ans);
}
double r(double t)
{
    return (exp(cos(t))-2*cos(4*t)+pow((sin(t/12.0)),5));
}
double X(double t)
{
    
    return (r(t) * cos(t));
}
double Y(double t)
{
    
    return (r(t) * sin((t)));
}


int main(void)
{
    ofstream out("2_3_1b.dat");
   // double m=1;
    
    double n=10000;
    double t=4*M_PI;
    double dt=8*M_PI/n;
   
    for(double i=-t;i<=t;i=i+dt)
    {
       
        out<<i<<"\t"<<X(i)<<"\t"<<Y(i)<<endl;
    }

    return 0;
}

 //plot command :
 /*  plot '2_2_1b.dat' using 1:2 with lines, '' using 1:3 with lines, '' using 1:4 with lines, '
' using 1:5 with lines  */