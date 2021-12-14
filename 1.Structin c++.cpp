

#include<iostream>
using namespace std;
void getdata();
void dispdata();
struct item
{
    private:
    int number;
    float cost;
    public:
    void getdata();
    void dispdata();
};
int main()

{
    item s;
    s.getdata();
    s.dispdata();
    return 0;
}
 void item :: getdata()
   {
    cout<<"Enter values for number and cost\n";
    cin >> number >> cost;
   }
void item :: dispdata()
{
cout << "Number and cost values of structure variable s =  "<< number <<"and "<< cost <<"respectively  \n";
}

