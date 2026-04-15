#include<iostream>

using namespace std;

int main(void)
{
    int i=0,j,n,k,sum=0;
    cout<<"enter a binary number : ";
    cin>>n;
    
    while(n!=0)
    {
        k=n%10;
        sum += k*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<sum<<endl;

}