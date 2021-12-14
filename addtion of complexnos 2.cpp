
#include<iostream>
using namespace std;
class complex
{
    private:
    int first ,second;
    public:
    void getdata(int x,int y)
    {
        first =x;
        second=y;
    }
    void showdata();
    complex add(complex c)
    {
        complex temp;
        temp.first=first+c.first;
        temp.second=second+c.second;
        
        return (temp);
    }
};
void complex :: showdata()
{
    cout<<first<<"+"<<second<<"i"<<endl;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata(5,10);
    c2.getdata(35,15);
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}