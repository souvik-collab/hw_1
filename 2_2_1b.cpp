#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;
//double h=(6.626*1e-34)/(2*M_PI);
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
double f1(double x,double p,double n)

{
    double h=1;
    return (1.0/sqrt(pow(2,n)*fact(n)))*(pow((p/M_PI),0.25))*exp(-(p*pow(x,2))/(2*h))*hn(n,pow(p,0.5)*x);
}


int main(void)
{
    ofstream out("2_2_1b.dat");
   // double m=1;
    double m=1;
    double w=1;
    double h=1;
    double p=(m*w)/h;
   
    for(double i=-5;i<=5;i=i+0.01)
    {
       
        out<<i<<"\t"<<f1(i,p,1.0)<<"\t"<<f1(i,p,2.0)<<"\t"<<f1(i,p,3.0)<<endl;
    }

    return 0;
}

 //plot command :
 /*  plot '2_2_1b.dat' using 1:2 with lines, '' using 1:3 with lines, '' using 1:4 with lines, '
' using 1:5 with lines  */