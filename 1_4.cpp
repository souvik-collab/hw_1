#include<iostream>

using namespace std;
int rootint(int n)
{
    if (n<0)
    {
        cout<<"sqrt is not possible"<<endl;
        return 1;
    }
    if(n==0){return n;}
    int i=0;
    while((i*i)<=n)
    {
        i=i+1;
    }
    return (i-1);
}
double precision(int n)
{
    double d=double(rootint(n));
    if((d*d)==n)
    {
        return d;
    }
    double incre=0.001;
    while((d*d)<=n)
    {
        d=d+incre;
    }
    return (d-incre);
}

int main(void)
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<precision(n)<<endl;

}