#include<iostream>
using namespace std;
int prime(int n)
{
    int flag =0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i ==0)
        flag=1;

    }
    return flag;

}
int main()
{
int x=5;
if(prime(x)==0)
    cout<<"Number is prime";
else
    cout<<"Not prime";
return 0;
}
