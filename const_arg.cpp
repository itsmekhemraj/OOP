#include <iostream>
using namespace std;
int add(const int a=5, int b= 6)
{
    b= 10;
    // a= 10;
    return a+b;
}
int main()
{
    cout<<add();
    return 0;
}