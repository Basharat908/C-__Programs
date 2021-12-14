#include<iostream>
using namespace std;
class shape
{
    public:
    int a;
    int b;
    void getdata(int m,int n)
    {
        a=m;
        b=n;
    }
};
class rectangle :public shape
{
    public:
    int rect_area()
    {
        int result;
        result = a * b;
        return result;
    }
};
class triangle : public shape
{
    public:
    float triangle_area()
    {
        float result;
        result=0.5*a * b;
        return result;
    }
};
int main()
{
    int j;
    float k;
    rectangle r;
    triangle t;
   r.getdata(10,5);
   j=r.rect_area();
   cout<<"\nArea of the rectangle :"<<j<<endl;
   t.getdata(6,5);
   k=t.triangle_area();
    cout<<"\nArea of the triangle :"<<k<<endl;
    return 0;

}