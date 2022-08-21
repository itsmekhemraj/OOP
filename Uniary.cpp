// #include <iostream>
// using namespace std;
// class test
// {
//     int x, y;
// public:

//     void getdata(int, int);
//     test operator++()
//     {
//         test t;
//         t.x = x++;
//         t.y = y++;
//         return t;
//     }
//     void display();
// };
// void test::getdata(int a, int b)
// {
//     x = a;
//     y = b;
// }
// void test::display()
// {
//     cout << x << endl
//          << y;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter 1st and 2nd value:- ";
//     cin >> a >> b;
//     test t;
//     t.getdata(a, b);
//     t.display();
//     ++t;
//     cout << endl
//          << "After increment" << endl;
//     t.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class plane
// {
//     float x, y, z;

// public:
//     void setplane(float, float, float);
//     void putplane();
//     void operator++();
// };

// void plane::setplane(float x, float p, float c)
// {
//     this->x = x;
//     this->y = p;
//     this->z = c;
// }

// void plane::putplane()
// {
//     cout << "(x, y, z): "<< "(" << x << "," << y << "," << z << ")\n";
// }

// void plane::operator++()
// {
//     this->x = ++x;
//     this->y = ++y;
//     this->z = ++z;
// }

// int main()
// {
//     plane p;
//     p.setplane(1.1, -2.2, 3.3);
//     p.putplane();
//     ++p;
//     p.putplane();
//     return 0;
// }

#include <iostream>
using namespace std;
class incre
{
    
    public:
    int x, y;
    void ask()
    {
        cout<<"Enter x:- ";
        cin>>x;
        cout<<"Enter y:- ";
        cin>>y;
    }
    // incre operator ++ ()
    // {
    //     x= ++x;
    //     y= ++y;
    // }
    void display()
    {
        cout<<endl<<"X= "<<x;
        cout<<endl<<"Y= "<<y;
    }
    friend void operator + (incre &i);
};
void operator + (incre &i)
{
    i.x= +i.x;
    i.y= +i.y;
}
int main()
{
    incre icr;
    icr.ask();
    icr.display();
    +icr;
    icr.display();
    return 0;
}