#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x-x-2;
}
double df(double x)
{
    return 3*x*x-1;
}
int main()
{
  double x=1.5;

  double tol=1e-6;
  while (fabs(f(x))>tol)
{
    x=x-(f(x)/df(x));
}
    cout<<"Root is : "<<x<<endl;



    return 0;
}