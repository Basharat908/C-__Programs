#include<iostream>
using namespace std;
class time
{
    private:
    int hour;
    int minute;
    public:
    void setdata()
    {
        cout<<"Enter the hours :\n";
        cin>>hour;
        cout<<"Enter the minutes :\n";
        cin>>minute;
    }
        void showdata()
        {
        cout<<hour<<" Hours   "<<minute<<" Minutes"<<endl;
    }
    void addtime(time t1,time t2)
    {
        hour= t1.hour+t2.hour;
        minute=t1.minute+t2.minute;
    }
};
int main()
{
    time t1,t2,t3;
    t1.setdata();
    t2.setdata();
    t3.addtime(t1,t2);
    t3.showdata();
    return 0;
}