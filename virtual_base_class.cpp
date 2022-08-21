#include <iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void set_roll(int r)
    {
        roll= r;
    }
};
class BEI:virtual public student
{
    protected:
    int c_lab_room;
    public:
    void set_c_lab_room(int n)
    {
        c_lab_room= n;
    }
};
class BCT:public virtual student
{
    protected:
    int cpp_lab_room;
    public:
    void set_cpp_lab_room(int n)
    {
        cpp_lab_room= n;
    }
};
class CLab:public BEI, public BCT
{
    int lab_incharge_id;
    public:
    void set_lab_incharge_id(int n)
    {
        lab_incharge_id= n;
    }
    void display()
    {
        cout<<endl<<"Roll:- "<<roll;
        cout<<endl<<"C Lab room:- "<<c_lab_room;
        cout<<endl<<"C++ Lab room:- "<<cpp_lab_room;
        cout<<endl<<"Lab incharge:- "<<lab_incharge_id;
    }
};
int main()
{
    CLab std1;
    std1.set_roll(101);
    std1.set_c_lab_room(104);
    std1.set_cpp_lab_room(105);
    std1.set_lab_incharge_id(555);
    std1.display();
    return 0;
}