#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
    return  pow(x,2)*pow((1-x),3);
}

// Simpson 1/3 Rule implementation
double simp13(double a, double b, long n) {
    double h = (b - a) / double(n); // Width of each sub-interval
    double sum =  f(a)+f(b); // Sum of first and last term

    // Sum of middle terms multiplied by 2
    for (int i = 1; i < n; i++) {
        if (i%2==0)
        {
            sum += 2 * f(a + i * h);
        }
        else
        {
            sum += 4 * f(a + i * h);
        }
    }

    return (h / 3) * sum;
}
double precision (double a ,double b)
{
     long intervals=10; 
    

    double i1= simp13(a, b, intervals);
    double i2= 1e4;
    while(abs(i2-i1)>1e-6)
    {
        i1=i2;
        intervals *= 10;
        i2= simp13(a, b, intervals);
        
    }
    return i2;
}
int main(void)
{
    cout<<precision(0,1)<<endl;
}