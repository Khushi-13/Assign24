#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float x, float y)
{
    return x+y;
}
float add(int c, float d)
{
    return c+d;
}
int main()
{
    int a,b,c;
    float x,y,d;

     cout<<"Enter values to sum(int type)";
     cin>>a>>b;

      cout<<"Enter values to sum(float type)";
     cin>>x>>y;

      cout<<"Enter values to sum(int float type)";
     cin>>c>>d;

     cout<<"\n sum of int type: "<<add(a,b);
     cout<<"\n sum of float type: "<<add(x,y);
     cout<<"\n sum of int float type: "<<add(c,d);
     return 0;


}


