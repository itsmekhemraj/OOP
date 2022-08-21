// #include <iostream>
// using namespace std;
// inline int check(int a, int b)
// {
//     return a>b?a:b;
// }
// int main()
// {
//     int a, b;
//     cout<<"Enter a and b:- ";
//     cin>>a>>b;
//     cout<<endl<<check(a, b);
//     return 0;
// }


#include <iostream>
using namespace std;
inline int check(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int x, y;
    cout<<"Enter x and y:- ";
    cin>>x>>y;
    cout<<check(x, y);
    return 0;
}