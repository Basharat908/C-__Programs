#include<iostream>
using namespace std;
class table
{
    private:
    int id;
    public:
    table()
    {
        id=0;
    }
    table (int x)
    {
        id=x;
    }
    table (table *x)
    {
        id=(*x).id;

    }
    void display()
    {
        cout<<id;
    }
};
int main()
{
    table m1;
    table m2(45);
    table m3(90);
    table m4(m3);
    table m5=m3;
    cout<<"\n id of m1 = ";
    m1.display();
    cout<<"\n id of m2 = ";
    m2.display();
    cout<<"\n id of m3 = ";
    m3.display();
    cout<<"\n id of m4 = ";
    m4.display();
    cout<<"\n id of m5 = ";
    m5.display();
    return 0;
}