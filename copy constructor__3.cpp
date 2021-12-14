#include<iostream>
using namespace std;
class student
{
    private:
    int Rollno;
    int Marks;
    public:
    student (int m,int n)
    {
        Rollno=m;
        Marks=n;
    };
    void showdata()
    {
        cout<<"Roll No   :"<<Rollno<<endl;
        cout<<"Marks     :"<<Marks<<endl;
    }
    student (student *obj)
    {
        Rollno=(*obj).Rollno;
        Marks=(*obj).Marks;
    }
};
int main()
{
    cout<<"\nParameterized constructor output abas\n";
    student abas(01,400);
    abas.showdata();
    student abid(abas);
    cout<<"\nCopy constructor output of abid\n";
    abid.showdata();
    return 0;
}