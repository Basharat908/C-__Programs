#include<iostream>
using namespace std;
class complex
{
    private:
    float x,y;
    public:
    complex()
    {
        x=0;
        y=0;
    }
    complex(float a)
     {
         x=a;
         y=0;
     }
     complex(float m,float n)
     {
         x=m;
         y=n;
     }
     void display()
     {
         cout<<"X = "<<x<<"   Y = "<<y<<endl;
     }
};
int main()
{
    complex o1,o2(22),o3(22.3,30.33);
    o1.display();
    o2.display();
    o3.display();
    return 0;
}