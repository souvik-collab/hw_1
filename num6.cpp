#include<iostream>

using namespace std;

int main(void)
{
    int x,y,z,n;
    cout<<"enter a max limit of any number  : ";
    cin>>n;
    
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n;y++)
        {
            for(z=1;z<=n;z++)
            {
                if(pow(x,2)+pow(y,2)-pow(z,2)==0)
                {
                    cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z<<endl;
                }
            }
        }
    }

}