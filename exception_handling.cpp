// #include <iostream>
// #include <math.h>
// using namespace std;
// template <class T>
// class square_root
// {
// private:
//     T num;

// public:
//     square_root(T n)
//     {
//         num= n;
//     }
//     T getNum()
//     {
//         return sqrt(num);
//     }
// };

// int main()
// {
//     float n;
//     cout << "Enter number:- ";
//     cin >> n;
//     try
//     {

//         if (n < 0)
//         {
//             throw 404;
//         }
//     }
//     catch (int x)
//     {
//         cout << "We can't find the square root of negative numbers in real number system-- ERROR CODE : " << x << endl;
//         exit(0);
//     }
//     square_root<float> squared_root(n);
//     cout << "The square root of given number is:- " << squared_root.getNum() << endl;
//     return 0;
// }


#include <iostream>
#include <math.h>
using namespace std;
template<class T>
class test
{
    T n;
    public:
    test(T x)
    {
        n= x;
    }
    T root()
    {
        return sqrt(n);
    }
};
int main()
{
    int num;
    cout<<"Enter number:- ";
    cin>>num;
    try
    {
        if(num<0)
        {
            throw 404;
        }
    }
    catch(int x)
    {
        cout<<endl<<"Cant find";
        exit(0);
    }
    // test <int> t(num);
    test <float>t(num);
    cout<<"Result is:- "<<t.root();
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter number:- ";
//     int n;
//     cin>>n;
//     try 
//     {
//         if(n>0)
//         {
//             throw 404;
//         }
//     }
//     catch(int x)
//     {
//         cout<<endl<<"It is posative integer:";
//         exit(0);
//     }
//     cout<<endl<<"It is negative integer";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:- ";
//     cin>>n;
//     try 
//     {
//         if(n==0)
//         {
//             throw n;
//         }
//     }
//             catch(int x)
//         {
//             cout<<"Something can't be divided by "<<x<<endl;
//         }
//     cout<<"Result is:- "<<100/n;
//     return 0;
// }