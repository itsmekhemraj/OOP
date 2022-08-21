// #include <iostream>
// using namespace std;
// void test(int x)
// {
//     try 
//     {
//         if(x<0)
//         {
//             throw x;
//         }
//         else if(x==0)
//         {
//             throw 'Z';
//         }
//         else
//         {
//             throw 9.9999;
//         }
//     }
//     catch(...)
//     {
//         cout<<endl<<"Happy";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter n:- ";
//     cin>>n;
//     test(n);
//     return 0;
// }


#include <iostream>
using namespace std;
void check(int x)
{
    try 
    {
        if(x==0)
        {
            throw x;
        }
        else if(x<0)
        {
            throw 'X';
        }
        else
        {
            throw 'A';
        }
    }
    catch(...)
    {
        cout<<"All accepted";
    }
}
int main()
{
    int n;
    cout<<"Enter number:- ";
    cin>>n;
    check(n);
    return 0;
}