#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

double f1(double x,double l,int n)
{
    return sqrt(2/l)*sin((n*M_PI*x)/l);
}


int main(void)
{
    ofstream out("2_2_1a.dat");
   // double m=1;
    double l=1;
    for(double i=0;i<=2*l;i=i+0.01)
    {
       
        out<<i<<"\t"<<f1(i,l,1)<<"\t"<<f1(i,l,2)<<"\t"<<f1(i,l,3)<<endl;
    }

    return 0;
}

 //plot command :
 /*  plot '2_2_1a.dat' using 1:2 with lines, '' using 1:3 with lines, '' using 1:4 with lines  */