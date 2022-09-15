#include<iostream>
using namespace std;
int max(int a, int b)
{
    return (a>b)?a:b;
}
float max(float x, float y)
{
    return (x>y)?x:y;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter the int value ";
    cin>>a>>b;
    cout<<"Enter the real value";
    cin>>x>>y;

    cout<<"\nMax value of int  is :"<<max(a,b);
    cout<<"\nMax value of real is :"<<max(x,y);
    return 0;
}
