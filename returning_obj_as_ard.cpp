#include <iostream>
using namespace std;
class student
{
    int marks, totlamarks= 0;
    public:
    void entermarks()
    {
        cout<<"Enter marks of students"<<endl;
        cin>>marks;
    }
    student addmarks(student m1)
    {
        student m3;
        m3.totlamarks= marks+m1.marks;
        return m3;
    }
    void displaymarks()
    {
        cout<<totlamarks;
    }
};
int main()
{
    student s1, s2, s3;
    s1.entermarks();
    s2.entermarks();
    s3= s1.addmarks(s2);
    s3.displaymarks();
    return 0;
}

// #include <iostream>
// using namespace std;
// int add()
// {
//     int a, b, s=0;
//     cout<<"Enter 1st number:- ";
//     cin>>a;
//     cout<<"Enter 2nd number:- ";
//     cin>>b;
//     s= a+b;
//     return s;
// }
// int main()
// {
//     cout<<"The sum is "<<add();
//     return 0;
// }
