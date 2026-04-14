#include<iostream>

using namespace std;

int main(void)
{
    int b[32],i=0,j,n,k;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"enter base no : ";
    cin>>k;
    while(n>0)
    {
        b[i]=n%k;
        n=n/k;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<b[j];
    }
    cout<<endl;

}