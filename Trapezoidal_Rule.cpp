#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return x*x;
}
double trapezoidal(double a,double b,int n)
{
    double h=(b-a)/n;
    double sum=fun(a)+fun(b);

    for(int i=1;i<n;++i)
    {
        double x=a+i*h;
        sum+=2*fun(x);
    }

    return (h/2)*sum;
}
int main()
{
    double a=0,b=1;
    int n=4;
    cout<<"Approximate Integral = "<<trapezoidal(a,b,n)<<endl;
  
    return 0;
}