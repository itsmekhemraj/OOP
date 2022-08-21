#include <iostream>
using namespace std;
class Base
{
    protected:
    int b;
    public:
    void setb(int x)
    {
        b= x;
    }
    void disp()
    {
        cout<<endl<<"Base class";
        cout<<"\n value of d:- "<<b;
    }
};
class Derived:public Base
{
    int d;
    public:
    void setd(int y)
    {
        d= y;
    }
    void disp()
    {
        cout<<endl<<"Derived class";
        cout<<"\n Valur of b and d:- "<<b<<" "<<d;
    }
};
int main()
{
    // Base *bp;
    // Base b;
    // bp= &b;
    // ((Derived*)bp)->disp();
    Derived *dp;
    Derived d;
    dp= &d;
    ((Base*)dp)->disp();
    // Base *bp;
    // Base b;
    // bp= &b;
    // bp->setb(100);
    // cout<<endl<<"bp points to Base object";
    // bp->disp();
    // Derived d;
    // bp= &d;
    // bp->setd(200);
    // cout<<endl<<"bp points to Derived object";
    // bp->disp();
    // bp->setb(200);
    // cout<<endl<<"bp now points to derived object";
    // bp->disp();
    // Derived *dp;
    // dp= &d;
    // dp->setd(500);
    // cout<<endl<<"derived type pointer";
    // dp->disp();
    // ((Derived*)bp)->disp();

    return 0;
}