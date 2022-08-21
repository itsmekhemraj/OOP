// #include <iostream>
// using namespace std;
// void test()
// {
//     try 
//     {
//         throw 10;
//     }
//     catch(int x)
//     {
//         throw;
//     }
// }
// int main()
// {
//     try 
//     {
//         test();
//     }
//     catch(int no)
//     {
//         cout<<no;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
void test()
{
    try 
    {
        throw 10;
    }
    catch(int x)
    {
        throw;
    }
}
int main()
{
    try 
    {
        test();
    }
    catch(int n)
    {
        cout<<n;
    }
    return 0;
}