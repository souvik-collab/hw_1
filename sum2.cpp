#include<iostream>
using namespace std;

long long facto(int n)
{
    long long  ans=1;
    if(n==0 || n==1){ans=1;}
    else{
    for (int i=1;i<=n;i++)
    {
        ans *= i;
    }}
    return ans;

}
long double combi(int n,int r)
{
    long double a = facto(n);
    long double b = facto(r)*facto(n-r);
    return (a/b);
}
long double sum(int n)
{
    long double sum=0;
    for(int r=0;r<=n;r++)
    {
        sum += pow(-1,r)*combi(n,r);
    }
    return sum;
}
int main (void)
{
    cout<<sum(10)<<"\t"<<sum(11)<<"\t"<<sum(15)<<"\t"<<sum(20)<<endl;
    //cout<<facto(0)<<" "<<facto(1)<<" "<<facto(10)<<" "<<facto(15)<<endl;
}