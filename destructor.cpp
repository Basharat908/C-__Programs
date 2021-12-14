#include<iostream>
using namespace std;
int count =0;
class table
{
    public:
    table()
    {
        count++;
        cout <<"No. of Objects created "<<count<<endl;
    }
    ~table()
    {
        cout<<"No. of Object Destroyed "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<" \n ENTER MAIN\n";
    table t1,t2,t3,t4;
    {
        cout<<"\n ENTER BLOCK 1 \n";
        table t5;
    }
    {
        cout<<"\n ENTER BLOCK2\n";
        table t6;
    }
    cout<<"\n RE-ENTER MAIN\n";
    return 0;
}