#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream in("data.dat");
    float num[10],temp;
    int i=0;
    while(in>>num[i])
    {
        
        i++;
    }
    int n=i;
    //cout<<i<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<endl;
    }
   
    return 0;
}