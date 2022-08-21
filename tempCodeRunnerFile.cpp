// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p= new int (65);
//     char *ch= reinterpret_cast<char*>(p);
//     cout<<*p<<endl;
//     cout<<*ch<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int *ptr= new int (65);
    char *ch= reinterpret_cast<char*>(ptr);
    cout<<*ptr<<endl;
    cout<<*ch<<endl;
    return 0;
}