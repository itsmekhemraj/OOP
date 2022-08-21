// function template

// #include <iostream>
// using namespace std;
// template<class T>  // function template
// void show(T a, T b)
// {
//     cout<<"A:- "<<a<<endl<<"B:- "<<b<<endl;
// }
// int main()
// {
//     int s= 10, t= 5;   
//     show(s, t);
//     return 0;
// }



// class template 


// #include <iostream>
// using namespace std;
// template<class T>
// class show
// {
//     T a, b;
//     public:
//     show(T p, T q)
//     {
//         a= p; 
//         b= q;
//     }
//     void show1()
//     {
//         cout<<"A:- "<<a<<endl<<"B:- "<<b<<endl;
//     }
// };
// int main()
// {
//     show <int>ob(1, 2);
//     ob.show1();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// template<class T>
// void test(T x)
// {
//     if(x%2==0)
//     {
//         cout<<"Even";
//     }
//     else
//     {
//         cout<<"odd";
//     }
// }
// int main()
// {
//     test(5);
//     return 0;
// }