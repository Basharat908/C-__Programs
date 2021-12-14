#include<iostream>
using namespace std;
class example
{
    private:
    int data;
    public:
    example()
    {      }
    example(int x)
    {
        data=x;
    }
    void showdata()
    {
        cout<<"Data  =  "<<data<<endl;
    }
   /* example(example &obj)
    {
        data=obj.data;
        cout<<"Copy constructor Run Successfully"<<endl;
    }*/
};
int main()
{
    example object1(55),object2;
    object2=object1;
   // object1.showdata();
   object2.showdata();
    return 0;
    
}