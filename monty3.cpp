#include<iostream>
#include<ctime>
#include<cmath>

//for sphere
//for ellipsoid add a,b,c same like ellipse


using namespace std;

int main(void)
{
    float x0=-1,y0=-1,x1=1,y1=1,z0=-1,z1=1;
    float x,y,z,p,q,r,s,t,u,v;
    int n=10000000,count=0,i;
    srand(time(NULL));
    for(i=0;i<=n;i++)
    {
        x=x0+((x1-x0)*rand()/RAND_MAX);
        y=y0+((y1-y0)*rand()/RAND_MAX);
        z=z0+((z1-z0)*rand()/RAND_MAX);
        p=-1.0+(2.0*rand()/RAND_MAX);
        q=-1.0+(2.0*rand()/RAND_MAX);
        r=-1.0+(2.0*rand()/RAND_MAX);
        s=-1.0+(2.0*rand()/RAND_MAX);
        t=-1.0+(2.0*rand()/RAND_MAX);
        u=-1.0+(2.0*rand()/RAND_MAX);
        v=-1.0+(2.0*rand()/RAND_MAX);

        if((pow(x,2)+pow(y,2)+pow(z,2)+pow(p,2)+pow(q,2)+pow(r,2)+pow(s,2)+pow(t,2)+pow(u,2)+pow(v,2))<=1)
        {
            count++;
        }
    }
    double volume_10 = pow(2,10)*double(count)/double(n);
    cout<<volume_10<<"\t"<<pow(M_PI,5)/120.0<<endl;
}