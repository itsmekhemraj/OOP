// #include <iostream>
// using namespace std;
// void display(int x)
// {
//     x= 10;
//     cout<<endl<<"X= "<<x;
// }
// int main()
// {
//     int x= 5;
//     display(x);
//     cout<<endl<<"X from main= "<<x;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void display(int &x)
// {
//     x= 20;
//     cout<<endl<<"X= "<<x;
// }
// int main()
// {
//     int x= 10;
//     display(x);
//     cout<<endl<<"X from main= "<<x;
//     return 0;
// }


#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    *a= *a+*b;
    *b= *a-*b;
    *a= *a-*b;
}
int main()
{
    int a= 5, b= 6;
    cout<<"Before swap:- "<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"After swap:- "<<a<<" "<<b<<endl;
    return 0;
}


// #include <iostream>
// using namespace std;
// int main
// {
//     int x;
//      x= 5;
//     // int &y= x;
//     cout<<"X= "<<x<<endl;
//     // cout<<"Y= "<<y<<endl;
//     return 0;
// }



#include <iostream>
using namespace std;
int main()
{
    int x= 5;
    // int &y= x;
    int y= x;
    cout<<"X= "<<x<<endl;
    cout<<"Y= "<<y<<endl;
    return 0;
}