#include <iostream>
using namespace std;
class test
{
    public:
    test()
    {
        int x= 10;
        cout<<endl<<"X= "<<x;
    }
    test(int x, int y=5)
    {
        cout<<endl<<"The sum is 2nd:- "<<x+y;
    }
    test(float x, float y=5, int z=4)
    {
        cout<<"The sum is 3rd:- "<<x+y+z;
    }
};
int main()
{
    // test t;
    // test t1(3);
    test t2(3.3);
    return 0;
}