#include<iostream>
using namespace std;
int highestDigit(int x)
{
    int max=-1;
    while(x)
    {
        if(max<x%10)
        max=x%10;
        x=x/10;

    }
    return max;
}
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Highest digit value is "<<highestDigit(x);
    return 0;
}
