#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;

    cout<<endl<<"Enter Principle amt : ";
    cin>>p;

    cout<<endl<<"Enter Rate of intrest : ";
    cin>>r;

    cout<<endl<<"Enter Time : ";
    cin>>t;

    si=(p*r*t)/100;

    cout<<endl<<"SI is : "<<si;

    return 0;
    
}