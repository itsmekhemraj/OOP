// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b;
//     public:
//     void getdata()
//     {
//         cout<<endl<<"Enter 1st and 2nd value:- ";
//         cin>>a>>b;
//     }
//     friend class B;
// };
// class B
// {
//     int c;
//     public:
//     void add(A obj)
//     {
//         c= obj.a+obj.b;
//         cout<<endl<<"The sum is:- "<<c;
//     }
// };
// int main()
// {
//     A a;
//     a.getdata();
//     B b;
//     b.add(a);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class time
// {
//     static int x= 10;
//     int y=20;
//     public:
//     static void display()
//     {
//         cout<<"Its me Khemraj"<<endl;
//         cout<<x;
//     }
// };
// int main()
// {
//     time::display();
//     return 0;
// }


#include<iostream>
using namespace std;
class test1;
class test2
{
    int x;
    public:
    test2()
    {
        cout<<"Enter x:- ";
        cin>>x;
    }
    friend class test1;
};
class test1
{
    public:
    void check(test2 t)
    {
        if(t.x>0)
        {
            cout<<"It is posative";
        }
        else
        {
            cout<<"It is negative";
        }
    }
};
int main()
{
    test2 t2;
    test1 t1;
    t1.check(t2);
    return 0;
}