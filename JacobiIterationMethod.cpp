#include<bits/stdc++.h>
using namespace std;
int main()
{

double x=0,y=0,z=0;
double x1,y1,z1;
double tol=1e-6;
int itr=0;

while(true)
{
    x1=(12-y-z)/10.0;
    y1 = (13 - 2*x - z) / 10.0;
    z1 = (14 - 2*x - 2*y) / 10.0;
     itr++;

    if(fabs(x1-x)< tol&& fabs(y1 - y) < tol && fabs(z1 - z) < tol)break;

    x=x1;
    y=y1;
    z=z1;
   
}
cout<<fixed<<setprecision(6);
cout<<"Jacobi Result : x= "<<x<<",y= "<<y<<", z= "<<z<<endl;
cout<<"Iteration : "<<itr<<endl;
    

    return 0;
}