#include<bits/stdc++.h>
using namespace std;

#define f1(x, y, z) (85-6*y+z)/27
#define f2(x, y, z) (72-6*x-2*z)/15
#define f3(x, y, z) (110-x-y)/54

int main()
{
    float e;
    cin>>e;
    float e1= e+1, e2=e+1, e3=e+1, xx, yy, zz;
    float x0=0, y0=0, z0=0;

    while(e1>e || e2>e || e3>e)
    {
        xx= f1(x0, y0, z0);
        yy= f2(x0, y0, z0);
        zz= f3(x0, y0, z0);

        e1= fabs(x0-xx);
        e2= fabs(y0-yy);
        e3= fabs(z0-zz);

        x0=xx;
        y0=yy;
        z0=zz;
    }
    cout<<x0<<" "<<y0<<" "<<z0<<endl;
}
