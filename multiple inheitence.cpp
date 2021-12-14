#include<iostream>
using namespace std;
class dad
{
    protected:
    int get_Money_dad;
    public:
    void getmoney_dad()
    {
        cout<<"\nEnter the pocket money received from dad :"<<endl;
        cin>>get_Money_dad;
    }
   void show_moneydad()
    {
        cout<<"\nPocket money given by dad :"<<get_Money_dad<<endl;
    }
};
class mom
{
    protected:
    int  get_Money_mom;
    public:
    void getmoney_mom()
    {
        cout<<"\nEnter the pocket money received from mom :"<<endl;
        cin>>get_Money_mom;
    }
   void show_moneymom()
    {
        cout<<"\nPocket money given by the mom :"<<get_Money_mom<<endl;
    }
};
class child:public dad,public mom
{
    private:
    int total_money;
    public:
    void total_sum_money()
    {
        total_money=get_Money_dad + get_Money_mom;
        cout<<"\nTotal Pocket Money :"<<total_money<<endl;
    }
};
int main()
{
    child obj;
    obj.getmoney_dad();
    obj.getmoney_mom();
    obj.show_moneydad();
    obj.show_moneymom();
    obj.total_sum_money();
    return 0;

}