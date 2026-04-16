#include<iostream>

using namespace std;
struct mat
{
    float x[10][10];
};
int main(void)
{
    mat a,b;
    int i,j;
    cout<<"Enter 3x3 matrix element : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a.x[i][j];
        }
    }
    double deter=0;
    for(i=0;i<3;i++)
    {
        deter += a.x[0][i]*(a.x[1][(i+1)%3]*a.x[2][(i+2)%3]-a.x[2][(i+1)%3]*a.x[1][(i+2)%3]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b.x[j][i]=(a.x[(i+1)%3][(j+1)%3]*a.x[(i+2)%3][(j+2)%3] - a.x[(i+1)%3][(j+2)%3]*a.x[(i+2)%3][(j+1)%3])/deter;
        }
    }
    cout<<"\nDeterminat : "<<deter<<endl;
    cout<<"\n\n\nThe inverse matrix : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b.x[i][j]<<" ";
        }
        cout<<endl;
    }


}