// #include <iostream>
// using namespace std;
// class base
// {
//     public:
//     void display()
//     {
//         cout<<endl<<"Base";
//     }
// };
// class derived:public base
// {
//     public:
//     void display()
//     {
//         cout<<endl<<"Derived";
//     }
// };
// int main()
// {
//     // derived d;
//     derived d;
//     // d.display();     // derived
//     d.base::display();    // base
//     // d.derived::display();   //derived
//     return 0;
// }


#include <iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<endl<<"From base";
    }
    void check()
    {
        cout<<endl<<"This is me";
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<endl<<"From derived";
    }
};
int main()
{
    base d;
    d.display();
    d.check();
    return 0;
}