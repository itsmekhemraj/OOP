// #include <iostream>
// using namespace std;
// class base
// {
//     public:
//     void disp()
//     {
//         cout<<endl<<"From base class disp";
//     }
//     virtual void show()
//     {
//         cout<<endl<<"From base class show";
//     }
// };
// class derived:public base
// {
//     void disp()
//     {
//         cout<<endl<<"From derived class disp";
//     }
//     void show()
//     {
//         cout<<endl<<"From derived class show";
//     }
// };
// int main()
// {
//     base *p;
//     base objb;    
//     p= &objb;
//     p->disp();
//     p->show();
//     derived objd;
//     p= &objd;
//     p->disp();
//     p->show();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class B
// {
//     int b= 5;
//     public:
//     virtual void show()= 0;
// };
// class D:public B
// {
//     int d= 6;
//     public:
//     void show()
//     {
//         cout<<"d= "<<d<<endl;
//     }
// };
// int main()
// {
//     B *bp;
//     D d;
//     bp= &d;
//     bp->show();
//     return 0;
// }



// virtual destructor


// #include <iostream>
// using namespace std;
// class B
// {
//     public:
//     B()
//     {
//         cout<<endl<<"base constructor";
//     }
//     virtual ~B()
//     {
//         cout<<endl<<"base dectructor";
//     }
// };
// class D:public B
// {
//     public:
//     D()
//     {
//         cout<<endl<<"derived constructor";
//     }
//     ~D()
//     {
//         cout<<endl<<"derived destructor";
//     }
// };
// int main()
// {
//     B *bp= new D;
//     delete bp;
//     return 0;
// }


#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<endl<<"Base constructor";
    }
    virtual ~base()
    {
        cout<<endl<<"Base destructor";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<endl<<"Derived constructor";
    }
    ~derived()
    {
        cout<<endl<<"Derived destructor";
    }
};
int main()
{
    base *bp= new derived;
    delete bp;
    return 0;
}