#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{

int n;
cout<<"Enter number of data points : ";
cin>>n;

double x[20],y[20][20];
cout<<"Enter x values : ";
for(int i=0;i<n;++i)
{
    cin>>x[i];
}
cout<<"Enter y values : ";
for(int i=0;i<n;++i)
{
    cin>>y[i][0];
}

for(int i=1;i<n;++i)
{
    for(int j=0;j<n-i;++j)
    {
        y[j][i]=((y[j+1][i-1])-(y[j][i-1]));
    }
}


double value;
cout<<"Enter x values : ";
cin>>value;

double h=(x[1]-x[0]);
double u=(value-x[0])/h;

double result =y[0][0];
double term=1;

for(int i=1;i<n;++i)
{
    term=term*(u-(i-1));
    result=result+(term*y[0][1])/fact(i);   
}

cout<<result<<endl;


    return 0;
}