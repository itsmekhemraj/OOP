// #include <iostream>
// using namespace std;
// int main()
// {
//     float n;
//     cout<<"Enter n:- ";
//     cin>>n;
//     try 
//     {
//         if(n==1)
//         {
//             throw 1;
//         }
//         else
//         {
//             throw 1.1;
//         }
//     }
//     catch(int x)
//     {
//         cout<<"You entered:- 1"<<x;
//         exit(0);
//     }
//     catch(float ch)
//     {
//         cout<<"You entered:- 1.1"<<ch;
//     }
//     cout<<100/n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void test(int x)
// {
//     try 
//     {
//         if(x>0)
//         {
//             throw x;
//         }
//         else
//         {
//             throw 'x';
//         }
//     }
//     catch(int no)
//     {
//         cout<<endl<<"Caught a integer value:- "<<no;
//     }
//     catch(char ch)
//     {
//         cout<<endl<<"Caught a character value:- "<<ch;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter value:- ";
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
        // else if(x<0)
        // {
        //     throw 'x';
        // }
        else
        {
            throw 3.55;
        }
    }
    catch(int n)
    {
        cout<<endl<<"Zero dected";
    }
    catch(float q)
    {
        cout<<endl<<"Posative integer";
    }
    // catch(char ch)
    // {
    //     cout<<endl<<"Negative integer";
    // }
}
int main()
{
    int m;
    cout<<"Enter number:- ";
    cin>>m;
    check(m);
    return 0;
}