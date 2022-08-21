// #include <iostream>
// using namespace std;
// class test
// {
//     public:
//     test();
//     void check()
//     {
//         int y= 5;
//         cout<<endl<<"Y= "<<y;
//     }
// };
// test::test()
// {
//     int x= 10;
//     cout<<"X= "<<x;
// }
// int main()
// {
//     test t;
//     t.check();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class test
// {
//     public:
//     // test()
//     // {
//     //     int x= 10;
//     //     cout<<endl<<"X1= "<<x;
//     // }
//     // test(int x)
//     // {
//     //     cout<<endl<<"X2= "<<x;
//     // }
//     test(int x, float y)
//     {
//         cout<<endl<<"Sum= "<<x+y;
//     }
// };
// int main()
// {
//     // test t;
//     // test t1(5);
//     test t2(8, 1.5);    // implicit call
//     test t3= test(5, 5.5);   // explicit call
//     return 0;
// }



//                      copy construcot            


// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b;
//     public:
//     A(int x, int y)
//     {
//         a= x;
//         b= y;
//     }
//     A(A &ref)
//     {
//         a= ref.a;
//         b= ref.b;
//     }
//     void show()
//     {
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main()
// {
//     A obj(10, 20);
//     A obj2= obj;
//     obj.show();
//     obj2.show();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class test
// {
//     int age, roll;
//     public:
//     test()
//     {
//         age= 30;
//         roll= 12;        
//     }
//     test(test &ref)
//     {
//         age= ref.age+10;
//         roll= ref.roll;
//     }
//     void display()
//     {
//         cout<<endl<<"Age and roll:- "<<age<<" "<<roll;
//     }
// };
// int main()
// {
//     test t;
//     t.display();
//     test t2= t;
//     t2.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class test
{
    int x, y;
    public:
    test()
    {
        x= 10; 
        y= 20;
    }
    test(test &ref)
    {
        x= ref.x+5;
        y= ref.y+5;
    }
    void display()
    {
        cout<<endl<<"The sum is:- "<<x+y;
    }
};
int main()
{
    test t;
    t.display();
    test t2= t;
    t2.display();
    return 0;
}