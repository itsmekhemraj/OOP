// #include <iostream>
// using namespace std;
// class test
// {
//     int x, y;
//     public:
//     void show();
//     friend void help (test t);
// };
// void test::show()
// {
//     cout<<"Enter value:- ";
//     cin>>x;
//     cout<<"Value is:- "<<x;
// }
// void help (test t)
// {
//     cout<<endl<<"Enter y:- ";
//     cin>>t.y;
//     cout<<endl<<"The 2nd value is:- "<<t.y;
// }
// int main()
// {
//     test t;
//     t.show();
//     help(t);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class test
// {
//     int x;
//     public:
//     void ask()
//     {
//         cout<<"Enter x:- ";
//         cin>>x;
//     }
//     friend void check(test t);
// };
// void check(test t)
// {
//     if(t.x>0)
// {
//     cout<<"It is posative integer";
// }
// else
// {
//     cout<<"It is negative integer";
// }
// }
// int main()
// {
//     test t;
//     t.ask();
//     check(t);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class A;
// class B
// {
//     int b;
//         friend void add(A, B);
//     public:
//     void getval(int x)
//     {
//         b= x;
//     }
//     void putval()
//     {
//         cout<<"Value of b is:- "<<b;
//     }

// };
// class A
// {
//     int a;
//     public:
//     void getval(int x)
//     {
//         a= x;
//     }
//     void putval()
//     {
//         cout<<endl<<"Value of a is:- "<<a;
//     }
//     friend void add(A, B);
// };
// void add(A ob1, B ob2)
// {
//     cout<<endl<<"The sum is:- "<<(ob1.a + ob2.b);
// }
// int main()
// {
//     A a;
//     B b;
//     a.getval(100);
//     b.getval(200);
//     a.putval();
//     b.putval();
//     add(a, b);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class test2;
// class test1
// {
//     int batch;
//     public:
//     void ask()
//     {
//         cout<<endl<<"Enter your batch:- ";
//         cin>>batch;
//     }
//     void display()
//     {
//         cout<<endl<<"Your batch is:- "<<batch;
//     }
//     friend void add(test1, test2);
// };
// class test2
// {
//     int roll;
//     public:
//     void ask()
//     {
//         cout<<endl<<"Enter roll:- ";
//         cin>>roll;
//     }
//     void display()
//     {
//         cout<<endl<<"Your roll is:- "<<roll;
//     }
//     friend void add(test1, test2);
// };
// void add(test1 t1, test2 t2)
// {
//     cout<<endl<<"Your batch is from friend:- "<<t1.batch;
//     cout<<endl<<"Your roll is from friend:- "<<t2.roll;
// }
// int main()
// {
//     test1 ta;
//     test2 tb;
//     ta.ask();
//     ta.display();
//     tb.ask();
//     tb.display();
//     add(ta, tb);
//     return 0;
// }