// basic to class type 

#include <iostream>
using namespace std;
class number
{
    int n;
    public:
    void print()
    {
        cout<<n;
    }
    number(int n)
    {
        this->n=n;
    }
};
int main()
{
    number num= 100;
    num.print();
    return 0;
}




// #include <iostream>
// using namespace std;
// class time
// {
//     int min, hr;
//     public:
//     time(){}
//     time(int t)
//     {
//         hr= t/60;
//         min= t%60;
//     }
//     void display()
//     {
//         cout<<hr<<" hr "<<min<<" min "<<endl;
//     }
// };
// int main()
// {
//     int t= 100;
//     time t1(t);
//     time t2= t;
//     t1.display();
//     t2.display();
//     return 0;
// }