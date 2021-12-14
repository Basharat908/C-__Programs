#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"I can eat!\n"<<endl;
    }
    void sleep()
    {
        cout<<"\nI can sleep!\n"<<endl;
    }
};
class dog : public animal
{
    public:
    void bark()
    {
        cout<<"Listen! I m barking\n"<<endl;
    }
};
int main()
{
    dog obj;   //creating an object of class dog
    obj.sleep(); //calling a function of class animal
    obj.eat();   //calling a function of class animal
    obj.bark();  //calling a fucntion of class dog
    return 0;
}