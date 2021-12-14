#include<iostream>
using namespace std;
class table
{
    private:
    int a;
    int b;
    public:
    table(int m, int n)
    {
        a=m;
        b=n;
    }
    int  area()
    {
        int z;
         z= a*b;
        return z;
    }
    
};
int main()
{
    int x,s;
    table t1(5,4);      // constructor called implicitly
    x=t1.area();
    cout<<"Area of t1 = "<<x<<endl;
    table t2 =table(4,4);    // construtor called explicitly
    s=t2.area();
    cout<<"Area of t2 = "<<s<<endl;
    return 0;
}