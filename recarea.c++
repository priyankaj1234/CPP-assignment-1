#include<iostream>
using namespace std;
int main()
{
    int l,b,Area,Perimeter;

    cout<<endl<<"Enter length of rectangle : ";
    cin>>l;

    cout<<endl<<"Enter breath of rectangle : ";
    cin>>b;

    Area= l*b;

    cout<<endl<<"Area of rectangle is : "<<Area;

    Perimeter=2*(l+b);

    cout<<endl<<"Perimeter of rectangle is : "<<Perimeter;

    return 0;

}
