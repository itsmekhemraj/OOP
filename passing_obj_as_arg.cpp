// #include <iostream>
// using namespace std;
// class test
// {
//     int a, b;
//     public:
//     void getdata();
//     void sum(test, test);
// };
// void test::getdata()
// {
//     cout<<"Enter 1st number:- ";
//     cin>>a;
//     cout<<"Enter 2nd number:- ";
//     cin>>b;
// }
// void test::sum(test t1, test t2)
// {
//     int x, y;
//     x= t1.a + t1.b;
//     y= t2.a + t2.b;
//     cout<<"The 1st sum is:- "<<x<<endl;
//     cout<<"The 2nd sum is:- "<<y<<endl;
// }
// int main()
// {
//     test t1, t2, t3;
//     t1.getdata();
//     t2.getdata();
//     t3.sum(t1, t2);
//     return 0;
// }


#include <iostream>
using namespace std;
class test
{
    int x;
    public:
    void ask()
    {
        cout<<"Enter x:- ";
        cin>>x;
    }
    void check(test t1, test t2)
    {
        if(t1.x>t2.x)
        {
            cout<<"1st is greater";
        }
        else
        {
            cout<<"2nd is greater";
        }
    }
};
int main()
{
    test t1, t2, t3;
    t1.ask();
    t2.ask();
    t3.check(t1, t2);
    return 0;
}