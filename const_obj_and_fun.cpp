#include <iostream>
using namespace std;
class test
{
    int x=5, y=4;
    public:
    void normal() const
    {
        // cout<<endl<<"y= ";
        // cin>>y;
        cout<<endl<<"y= "<<y;
    }
    void cons()
    {
        // x+=5;
        cout<<endl<<"x= "<<x;
    }
};
int main()
{
    test t1;
    t1.normal();
    t1.cons();
    // test t2;
    // t2.cons();
    return 0;
}

// In case of constant finction, we can call through normal process but in case of constant object, it can call only constant member function and constant data member.