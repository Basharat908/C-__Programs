#include <iostream>
using namespace std;
class smallobj
{
    private:
    int somedata;
    public:
    void getdata(int b)
    {
        somedata = b;
    }
    void showdata()
    {
        cout<< "Data is "<< somedata <<endl;
    }
};
int main()
{
    smallobj s1,s2;
    s1.getdata(22);
    s2.getdata(30);
    
    s1.showdata();
    s2.showdata();

}