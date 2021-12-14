#include<iostream>
using namespace std;
class student
{
    private:
    int Data_structure;
    int Discrete_maths;
    public:
    void getdata(int a, int b)
    {
        Data_structure=a;
        Discrete_maths=b;
    }
    void showdata();
    void sum_marks(student,student);
};
void student::showdata()
{
    cout<<"Data_structure marks =   "<<Data_structure<<endl;
    cout<<"Discrete_maths =  "<<Discrete_maths<<endl;
}
void student::sum_marks(student p,student q)
{
    Data_structure = p.Data_structure   + q.Data_structure;
    Discrete_maths = p.Discrete_maths + q.Discrete_maths;
    
}
int main()
{
    student Aamir,Aasif,Aabas;
    Aamir.getdata(40,45);
    Aasif.getdata(35,40);
    
    cout<<"\nMarks int  two subjects of student First :\n";
    Aamir.showdata();

    cout<<"\nMarks in the two subjects of student Second :\n";
    Aasif.showdata();

    Aabas.sum_marks(Aamir,Aasif);
    cout<<"\n Marks in two subjects of Student third :\n";
    Aabas.showdata();
    return 0;
}