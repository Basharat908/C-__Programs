#include<iostream>
using namespace std;
class base
{
    public:
    int x;
    void getvalue()
    {
        cout<<"Enter the value for the x :"<<endl;
        cin>>x;
    }
};
class derived1 : public base 
{
    public:
    int y;
    void getvalue_y()
    {
        cout<<"Enter the value for the y :"<<endl;
        cin>>y;
    }
};
class derived2 : public derived1
{
    private:
    int z;
    public:
    void getvalue_z()
    {
        cout<<"Enter the value fot the z :"<<endl;
        cin>>z;
    }
    void product()
    {
        cout<<"product of the values of x,y,z = "<< x*y*z<<endl;
    }
};
int main()
{
    derived2 obj;
    obj.getvalue();
    obj.getvalue_y();
    obj.getvalue_z();
    obj.product();
    return 0;
}