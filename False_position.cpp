#include<bits/stdc++.h>
using namespace std;
const double e= 1e-3;

double f(double x)
{
    return 3*x- cos(x)-1;
}
int main()
{
    double x1=0, x2=2;

    double mid;
    mid = x1 - (f(x1)*(x2-x1))/(f(x2)-f(x1));

    while(abs(f(mid))> e)
    {
        if(f(x1)*f(mid) < 0)
        {
            x2= mid;
        }else
        {
            x1=mid;
        }
        mid = x1 - (f(x1)*(x2-x1))/(f(x2)-f(x1));
    }
    cout<<"root :"<<mid;
}
