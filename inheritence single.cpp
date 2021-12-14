// single inheritence
#include<iostream>
using namespace std;
class A
{
    private:
    int data_A;
    public:
    void setdata()
    {
        cout<<"Enter value in data_A "<<endl;
        cin>>data_A;
    }
    void display_A()
    {
        cout<<"Entered value is :"<<data_A<<endl;
    }
};
class B : private A
{
    public:
    void display_B()
    {
        setdata();
        display_A();
        cout<<"Hello this is Class B "<<endl;
    }

};
int main()
{
    B object;
  //  object.setdata();
   // object.display_A();
    object.display_B();
    return 0;
}