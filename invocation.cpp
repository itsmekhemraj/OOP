// #include <iostream>
// using namespace std;
// class test1
// {
//     int a, b;

// public:
//     test1()
//     {
//         cout << "Constructor A 1st" << endl;
//     }
//     // test1(int a, int b) : a(a), b(b)
//     // {
//     //     cout << "Constructor B 1st" << endl;
//     // }
//     ~test1()
//     {
//         cout << "Destructor 1st" << endl;
//     }
//     // void display1()
//     // {
//     //     cout << "The sum is:- " << (a + b) << endl;
//     // }
// };
// class test2

// {
//     int c, d;

// public:
//     test2()
//     {
//         cout << "Constructor A 2nd" << endl;
//     }
//     // test2(float q) : c(q), d(c)
//     // {
//     //     cout << "Constructor B 2nd" << endl;
//     // }
//     ~test2()
//     {
//         cout << "Destructor 2nd" << endl;
//     }
//     // void display2()
//     // {
//     //     cout << "The values are " << c << ", " << d << endl;
//     // }
// };
// class test3 : public test1, public test2
// {
//     int x, y;

// public:
//     test3()
//     {
//         cout << "Constructor A 3rd" << endl;
//     }
//     // test3(int g, float h, int i, int j) : test1(g, i), x(g + i), y(j * i), test2(h)
//     // {
//     //     cout << "Constructor B 3rd" << endl;
//     // }
//     ~test3()
//     {
//         cout << "Destructor 3rd" << endl;
//     }
//     // void display3()
//     // {
//     //     cout << "The value of x and y are:- " << x << ", " << y << endl;
//     // }
// };
// int main()
// {
//     test3 t3;
//     // test3 t2(5, 6.89, 3, 8);
//     // t2.display1();
//     // t2.display2();
//     // t2.display3();
//     return 0;
// }



#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<endl<<"1st constructor";
    }
    ~A()
    {
        cout<<endl<<"1st Destructor";
    }
};
class B
{
    public:
    B()
    {
        cout<<endl<<"2nd Constructor";
    }
    ~B()
    {
        cout<<endl<<"2nd Destructor";
    }
};
// class C:virtual public A()
// {
//     C()
//     {
//         cout<<endl<<"3rd Constructor";
//     }
//     ~C()
//     {
//         cout<<endl<<"3rd Destructor";
//     }
// };
class D:public A, public virtual B
{
    public:
    D()
    {
        cout<<endl<<"4th Constructor";
    }
    ~D()
    {
        cout<<endl<<"4th Destructor";
    }
};
int main()
{
    // C c;
    D d;
    return 0;
}



// #include <iostream>
// using namespace std;
// class test
// {
    
//     public:
//     int x, y;
//     test()
//     {
//         x= 5;
//         y= 6;
//     }
//     void display()
//     {
//         cout<<endl<<"The sum is:- "<<x+y;
//     }
// };
// class BCT:virtual public test
// {
//      public:
//     int hold;
   
//     BCT()
//     {
//         hold= x;
//     }
//     void show()
//     {
//         cout<<endl<<"X= "<<hold;
//     }
// };
// class BEI:virtual public test
// {
//      public:
//     int temp;
   
//     BEI()
//     {
//         temp= y;
//     }
//     void dispdata()
//     {
//         cout<<endl<<"Y= "<<temp;
//     }
// };
// class check:public BCT, public BEI
// {
//     public:
//     check()
//     {
//         cout<<endl<<"All the values are:- "<<x<<" "<<y<<" "<<hold<<" "<<temp;
//     }
// };
// int main()
// {
//     check ck;
//     ck.display();
//     ck.show();
//     ck.dispdata();
//     return 0;
// }

