// #include <iostream>
// using namespace std;
// template<class T>
// void sum(T a, T b)
// {
//     cout<<endl<<"1st template";
// }
// template<class T>
// void sum(T x, T y, T z)
// {
//     cout<<endl<<"2nd Template";
// }
// template<class T>
// void sum(T c)
// {
//     cout<<endl<<"3rd template";
// }
// int main()
// {
//     sum(3, 4, 5);
//     sum(1);
//     sum(1, 2);   
//     return 0;
// }


// defult data type and arguments


// #include <iostream>
// using namespace std;
// template<class T1= int, class T2= float>
// class test
// {
//     T1 a;
//     T2 b;
//     public:
//     test(T1 x, T2 y)
//     {
//         a= x;
//         b= y;
//     }
//     void display()
//     {
//         cout<<"A:- "<<a<<endl;
//         cout<<"B:- "<<b<<endl;
//     }
// };
// int main()
// {
//     test<> tt(6,7.6);
//     tt.display();
//     test<float, float> t2(3.3, 5.5);
//     t2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// template<class T>
// void sum(T a, T b=4)
// {
//     cout<<endl<<"1st template";
//     cout<<a+b;
// }
// template<class T>
// void sum(T x, T y, T z)
// {
//     cout<<endl<<"2nd template";
// }
// int main()
// {
//     sum(3.4);
//     sum(4, 5, 6);
//     return 0;
// }


#include <iostream>
using namespace std;
template<class T1= int, class T2= float>
class test
{
    T1 x;
    T2 y;
    public:
    test(T1 a, T2 b)
    {
        x= a;
        y= b;
    }
    void display()
    {
        cout<<"X= "<<x<<endl;
        cout<<"Y= "<<y<<endl;
    }
};
int main()
{
    test<> t1(3, 5.5);
    t1.display();
    test<char, char> t2('a', 'b');
    t2.display();
    return 0;
}