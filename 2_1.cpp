#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

double f1(double x)
{
    return 5*sin(x);
}
double f2(double x)
{
    return 5*sin(2*x);
}
double f3(double x)
{
    return 5*sin(3*x);
}

int main(void)
{
    ofstream out("2_1.dat");
    double i;
    double p;
    for(i=0;i<=6.3;i=i+0.01)
    {
        p=f1(i)+f2(i)+f3(i);
        out<<i<<"\t"<<f1(i)<<"\t"<<f2(i)<<"\t"<<f3(i)<<"\t"<<p<<endl;
    }

    return 0;
}

 //plot command :
 /*  plot '2_1.dat' using 1:2 with lines, '' using 1:3 with lines, '' using 1:4 with lines, '
' using 1:5 with lines  */