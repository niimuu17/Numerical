#include<bits/stdc++.h>
using namespace std;
const double E = 1e-3;

double f(double x, double a, double b, double c, double d, double e)
{
    return a*x*x*x*x +b*x*x*x +c*x*x +d*x+e;
}
double bi(double xx1, double xx2,  double a, double b, double c, double d, double e)
{
    double mid = (xx1+xx2)/2;
    int ct=0;
    while(abs(f(xx1, a, b, c, d, e)-f(xx2, a, b, c, d, e)) > E)
    {
        if(f(xx1, a, b, c, d, e)*f(mid, a, b, c, d, e) <0)
        {
            xx2=mid;
        }else
        {
            xx1=mid;
        }
          mid= (xx1+xx2)/2;
        ct++;
    }
    cout<<"root :"<<mid<<endl;
    cout<<"Iteration needed = "<<ct<<endl;
    cout<<endl;
}

int main()
{
    double aa, bb, cc, dd, ee;
    cin>>aa>>bb>>cc>>dd>>ee;
    double x1= -sqrt(pow((bb/aa), 2)-2*(cc/aa));
    double x2 = sqrt(pow((bb/aa), 2)-2*(cc/aa));
    while(x1<x2)
    {
        if(f(x1, aa, bb, cc, dd, ee)*f(x1+.5, aa, bb, cc, dd, ee) <0)
        {
            cout<<"["<<x1<<","<<x2<<"]"<<endl;
            bi(x1, x1+.5, aa, bb, cc, dd, ee);
        }
        x1=x1+.5;
    }
}
