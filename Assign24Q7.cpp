#include<iostream>
using namespace std;
int add (int a, int b, int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 number is "<<add(3,1)<<endl;
    cout<<"Addition of 3 number is "<<add(10,20,30);
    return 0;
}
