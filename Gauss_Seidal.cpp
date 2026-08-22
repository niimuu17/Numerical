#include<bits/stdc++.h>
using namespace std;

float f1(float y, float z) { return (85-6*y+z)/27; }
float f2(float x, float z) { return (72-6*x-2*z)/15; }
float f3(float x, float y) { return (110-x-y)/54; }

int main()
{
    float e;
    cin>>e;
    float e1=e+1, e2=e+1, e3=e+1, x0=0, y0=0, z0=0, xx, yy, zz;

    while(e1>e || e2>e || e3>e)
    {
        xx= f1( y0, z0);
        yy= f2(xx, z0);
        zz= f3(xx, yy);

        e1= fabs(x0-xx);
        e2= fabs(y0-yy);
        e3= fabs(z0-zz);

        x0=xx;
        y0=yy;
        z0=zz;
    }
    cout<<x0<<" "<<y0<<" "<<z0;
}
