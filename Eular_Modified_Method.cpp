#include<bits/stdc++.h>
using namespace std;
double func(double x,double y)
{
    return x+y;
}
int main()
{
     double x0, y0, h, xn;
    cout << "Enter initial x0, y0: ";
    cin >> x0 >> y0;
    cout << "Enter step size h: ";
    cin >> h;
    cout << "Enter value of x at which y is required: ";
    cin >> xn;
  double x=x0,y=y0;
  while(x<xn)
  {
       double yp=y+h*func(x,y);
       double ypp=y+(h/2.0)*(func(x,y)+func(x+h,yp));
       y=ypp;
       x=x+h;
         cout<<x<<" "<<y<<endl;
  }
  cout<<fixed<<setprecision(6);
  cout<<y<<endl;
    




    return 0;
}