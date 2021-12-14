#include<iostream>
using namespace std;
class demo
{
    private:
    int a;
    int b;
    public:
    demo(int x,int y)
    {
        cout<<"\nHere is the constructor called\n\n";
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"    "<<b<<endl;
    }
    demo()
    {
        cout<<"\nHere is the new consructor\n";
    }
};
int main()
{
    demo object1(15,12),object2(10,20),object3(30,40),sigle;
    object1.showdata();
    object2.showdata();
    object3.showdata();
    return 0;
}