#include<iostream>
using namespace std;
class Wall
{
    private:
    int length;
    int breath;
    public:
    Wall()
    {
        cout<<"Default constructor called\n";
    }
    Wall(int x,int y)
    {
        cout<<"Paramaterized constructor called\n";
        length=x;
        breath=y;
    }
    Wall (Wall &obj)
    {
        cout<<"Copy constructor is called :\n";
        length=obj.length;
        breath=obj.breath;
    }
     ~Wall()
    {
        cout<<"Destructor is called\n";
    }
    int calculate_area( )
    {
        return length *breath;
    }
  
};         
int main()
{
    Wall w1(),w2(30,40),w3(w2);
    cout<<"Area of Room 1 : "<< w2.calculate_area()<<endl;
   
    cout<<"Area of Room 2 : "<< w3.calculate_area()<<endl;
   
    return 0;
}