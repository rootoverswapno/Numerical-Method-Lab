#include<bits/stdc++.h>
using namespace std;

#define f1(x,y,z) (17-y+2*z)/20.0
#define f2(x,y,z) (72-6*x-2*z)/15.0
#define f3(x,y,z) (110-x-y)/54.0

int main()
{   

    float e;
    cout<<"Tolarence : ";
    cin>>e;
    
    float x0=0,y0=0,z0=0;
    float x,y,z;
    int e1,e2,e3;
    int itr=0;
    
    do
    {
        x=f1(x,y,z);
        y=f2(x,y,z);
        z=f3(x,y,z);
        itr++;

        cout << itr << "   x=" << x << "   y=" << y << "   z=" << z << endl;
        
        e1=abs(x-x0);
        e2=abs(y-y0);
        e3=abs(z-z0);

        x0=x;
        y0=y;
        z0=z;

    } while (e1>e || e2>e || e3>e);
    
    
    cout << "\nRoot: x=" << x << "  y=" << y << "  z=" << z << endl;

    return 0;
}