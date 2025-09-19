#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x-x-2;
}
int main()
{
   double a,b;
   a=1;
   b=2; 
   double tollerance=1e-6;

   while ((b-a)>=tollerance)
   {
       double c=(a+b)/2;
       if(f(c)==0.0)break;
       if((f(c)*f(a))<0)
       {
         b=c;
       }
       else
       {
         a=c;
       }
   }
   cout<<"Root is : "<<(a+b/2)<<endl;
  
    return 0;
}