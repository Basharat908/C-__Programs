#include <iostream>
using namespace std;
class student
{
    private:
    int Rollno;
    int Marks;
    int Age;
   public:
    void setdata(int a,int b,int c){
            Rollno=a;
            Marks=b;
            Age=c;
    }
        void showdata()
        {
            cout<<"Rollno = "<<Rollno;
            cout<<" Marks = "<<Marks;
            cout<<" Age = "<<Age<<endl;
        }
};
int main()
{
    student Basharat,Aabid;
    Basharat.setdata(01,400,21);
    Aabid.setdata(01,300,18);
    Basharat.showdata();
    Aabid.showdata();
    return 0;
}