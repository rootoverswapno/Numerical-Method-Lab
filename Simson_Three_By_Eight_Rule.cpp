#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return 1.0/(1+x*x);
}
double simpson13(double a,double b,int n)
{
    if(n%3!=0)
    {
         cout << "Error: n must be even for Simpson's 1/3 Rule.\n";
        return -1;
    }
    double h=(b-a)/n;
    double sum=fun(a)+fun(b);

    for(int i=1;i<n;i++)
    {
        double x=a+i*h;
        if(i%3==0)
        {
            sum+=2*fun(x);
        }
        else
        {
            sum+=3*fun(x);
        }
    }
    return (3*h/8.0)*sum;
}
int main()
{
   double a,b;
   int n;
   
   cout<<"Enter Lower Limit a : ";
   cin>>a;
   cout<<"Enter Upper Limit b : ";
   cin>>b;
   cout<<"Enter number of intervals n (must be even) : ";
   cin>>n;

   double result=simpson13(a,b,n);

   if(result!=-1)
   cout << "Result of integration = " << result << endl;

    return 0;
}