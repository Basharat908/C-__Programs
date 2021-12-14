#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imgi;
    public:
     void setdata()
    {
        cout<<"Enter the real part of the complex number :\n";
        cin>>real;
        cout<<"Enter the imiginary part of complex number :\n";
        cin>>imgi;
       
    }
    void showdata()
    {
        cout<<real<<"+"<<imgi<<"i"<<endl;
    }
   complex addcomplex(complex  p)
    {
         complex result;
         result.real= real+p.real;
         result.imgi= imgi+p.imgi;

        return result;
    }
     
};
int main()
{
    complex c1,c2,c;
    c1.setdata();
    c2.setdata();
   c=c1.addcomplex(c2);
   cout<<"\nAddition of the two complex numbers is below :\n";
   c.showdata();
    return 0;
}