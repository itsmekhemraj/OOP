// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//     double real, img;

// public:
//     Complex() {}
//     Complex operator+(Complex c)
//     {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//     }
//     friend void operator>>(istream &mycin, Complex &c)
//     {
//         mycin >> c.real;
//         mycin >> c.img;
//     }
//     friend void operator<<(ostream &mycout, Complex &c)
//     {
//         mycout << c.real << " + " << c.img << "j";
//     }
// };
// int main()
// {
//     Complex c1, c2, c3;
//     cout << "Input Complex number 1: " << endl;
//     cin >> c1;
//     cout << "Input Complex number 2: " << endl;
//     cin >> c2;
//     cout << "Sum of two complex numbers is: ";
//     c3 = c1 + c2;
//     cout << c3;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;
//     public:
//     complex(){}
//     complex operator + (complex c)
//     {
//         complex temp;
//         temp.real= real+c.real;
//         temp.img= img+c.img;
//         return temp;
//     }
//     friend void operator >>(istream &take, complex &c)
//     {
//         take>>c.real;
//         take>>c.img;
//     }
//     friend void operator <<(ostream &throww, complex &c)
//     {
//         throww<<c.real<<" + "<<c.img<<"i"<<endl;
//     }
// };
// int main()
// {
//     complex c1, c2, c3;
//     cout<<"Enter 1st complex number:- ";
//     cin>>c1;
//     cout<<"Enter 2nd complex number:- ";
//     cin>>c2;
//     c3= c1+c2;
//     cout<<"The sum is:- "<<endl;
//     cout<<c3;
//     return 0;
// }



#include <iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    complex() {}
    complex operator + (complex c)
    {
        complex temp;
        temp.real= real+c.real;
        temp.img= img+c.img;
        return temp;
    }
    friend void operator>>(istream &take, complex &c)
    {
        take>>c.real;
        take>>c.img;
    }
    friend void operator<<(ostream &out, complex &c)
    {
        out<<endl<<c.real<<" + "<<c.img<<"i";
    }
};
int main()
{
    complex c1, c2, c3;
    cout<<"Enter 1st complex:- ";
    cin>>c1;
    cout<<"Enter 2nd complex:- ";
    cin>>c2;
    c3= c1+c2;
    cout<<"The sum is:- "<<c3;
    return 0;
}