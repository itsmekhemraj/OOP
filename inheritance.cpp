// #include <iostream> 
// using namespace std; 
// class base    //single base class
// {
//    public:
//      int x;
//    void getdata()
//    {
//      cout << "Enter the value of x = "; cin >> x;
//    }
//  };
// class derive : public base    //single derived class
// {
//    private:
//     int y;
//    public:
//    void readdata()
//    {
//      cout << "Enter the value of y = "; cin >> y;
//    }
//    void product()
//    {
//      cout << "Product = " << x * y;
//    }
//  };
 
//  int main()
//  {
//     derive a;     //object of derived class
//     a.getdata();
//     a.readdata();
//     a.product();
//     return 0;
//  }


// #include <iostream>
// using namespace std;
// class A
// {
    
//     public:
//     int x;
//     void getdata()
//     {
//         cout<<"Enter X:- ";
//         cin>>x;
//     }
// };
// class C
// {
    
//     public:
//     int a;
//     void enter()
//     {
//         a= 100;
//     }
// };
// class B:public A, public C
// {
//     int y;
//     public:
//     void putdata()
//     {
//         cout<<"Enter Y:- ";
//         cin>>y;
//     }
//     void display()
//     {
//         cout<<"The result is:- "<<(x*y)+a<<endl;
//     }
// };
// int main()
// {
//     B obj;
//     obj.getdata();
//     obj.putdata();
//     obj.enter();
//     obj.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class base
// {
    
//     public:
//     int x, y;
//     base()
//     {
//         cout<<"Enter x:- ";
//         cin>>x;
//         cout<<"Enter y:- ";
//         cin>>y;
//     }
// };
// class derived1:private base
// {
//     int s;
//     public:
//     derived1()
//     {
//         s= x+y;
//         cout<<endl<<"The sum is:- "<<s;
//     }
// };
// class derived2:private base
// {
//     int d;
//     public:
//     derived2()
//     {
//         d= x-y;
//         cout<<endl<<"The difference is:- "<<d;
//     }
// };
// int main()
// {
//     derived1 d1;
//     derived2 d2;
//     return 0;
// }

#include <iostream>
using namespace std;
class Base
{
   protected:
   int y= 30;
    public:
    int x=10;
    void display()
    {
        cout<<endl<<"From base";
    }
};
class derived:public Base
{
    public:
    derived()
    {
        cout<<endl<<"X is:- "<<x;
        cout<<endl<<"Y  is:- "<<y;
    }
};
int main()
{
    derived d;
    return 0;
}