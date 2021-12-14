#include<iostream>
using namespace std;
inline int mul(int x,int y)
{
    return (x * y);
}
int main()
{
    int a ,b;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin >>b;
    cout <<"Multi;lication of two numbers =  "<<mul(a,b)  <<"\n";
}