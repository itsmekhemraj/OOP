// #include <iostream>
// using namespace std;
// class complex
// {
//     public:
//     const float real= 7.6;
//     float imag;
//     float get_real() const
//     {
//         return real;
//     }
//     float get_imag()
//     {
//         cout<<"Enter imaginary number:- ";
//         cin>>imag;
//         return imag;
//     }
// };
// int main()
// {
//     complex comp;   
//     cout<<"\t"<<comp.get_real()<<"\t"<<"+"<<"\t"<<comp.get_imag()<<"i"<<endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// class complex
// {
//     public:
//     float real= 7.6;
//     float imag= 3.923;
//     float get_real()
//     {
//         cout<<"Enter real part:- ";
//         cin>>real;
//         return real;
//     }
//     float get_imag()
//     {
//         cout<<"Enter imag part:- ";
//         cin>>imag;
//         return imag;
//     }
// };
// int main()
// {
//     complex comp1;   
//     cout<<endl<<"\t"<<comp1.get_real()<<"\t"<<"+"<<"\t"<<comp1.get_imag()<<"i"<<endl;
//     const complex comp2;
//     cout<<"With constant object:"<<endl;
//     cout<<"\t"<<comp2.real<<"\t"<<"+"<<"\t"<<comp2.imag<<"i"<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class time
// {
//     int hr, min, sec;
//     public:
//     time()
//     {
//         hr= 12;
//         min= 0;
//         sec= 0;
//         cout<<endl<<"The time in H::M::S format from default constructor:"<<endl;
//         cout<<hr<<":"<<min<<":"<<sec<<endl;
//     }
//     time(int x, int y, int z)
//     {
//         hr= x;
//         min= y;
//         sec= z;
//         cout<<endl<<"The time in H::M::S format from parameterized constructor:"<<endl;
//         cout<<hr<<":"<<min<<":"<<sec<<endl;
//     }
//     time(time &t)
//     {
//         hr= t.hr;
//         min= t.min;
//         sec= t.sec;
//         cout<<endl<<"The time in H::M::S format from copy constructor:"<<endl;
//         cout<<hr<<":"<<min<<":"<<sec<<endl;
//     }
// };
// int main()
// {
//     time t1;
//     int sec, h, m, s;
//     cout<<endl<<"Enter the time in seconds:- ";
//     cin>>sec;
//     h= (sec/3600);
//     m= (sec-(3600*h))/60;
//     s= (sec-(3600*h)-(m*60));
//     time t2(h, m, s);
//     time t3(t1);
//     return 0;
// }
