#include <iostream>
using namespace std;
class test
{
    int x= 5;
    static int y;
    public:
    test()
    {
        cout<<"The sum is:- "<<x+y<<endl;
    }
    void check()
    {
        cout<<"Y is:- "<<y;
    }
    static void display()
    {
        cout<<"The sum is 2nd:- "<<y<<endl;
    }
    // void check();
};
int test::y= 3;  // have to initialize the value for static data member
int main()
{
    test t;
    t.display();
    t.check()
    return 0;
}


//   static member function can access only static data member