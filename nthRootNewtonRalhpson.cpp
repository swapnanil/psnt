#include<iostream>
#include<cmath>
using namespace std;
double n,c;

double numerator(double x)
{ return (pow(x,n)-c);}

double derivative(double x)
{ return n*pow(x,n-1);}

int main()
{
    cout<<"x : ";
    cin>>c;
    cout<<"n: ";
    cin>>n;
    double x=0.0,pre;
    while(numerator(x)<=0)x++;
    x/=2;
    do
    {pre=x;
    //cout<<x<<endl;
    x=x-numerator(x)/derivative(x);
    }
    while(abs(pre-x));
    cout<<x<<endl;
    return 0;
}
