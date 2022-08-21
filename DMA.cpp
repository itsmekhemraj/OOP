// #include <iostream>
// using namespace std;
// int main()
// {
//     int *ptr = new int(3);
//     int i;
//     for(i=0; i<3; i++)
//     {
//         cout<<"Enter number:- ";
//         cin>>ptr[i];
//     }
//     for(i=0; i<3; i++)
//     {
//         ptr[i]++;
//         cout<<ptr[i]<<endl;
//     }
//     delete ptr;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int *ptr= new int(3);
//     int i;
//     for(i=0; i<3; i++)
//     {
//         cout<<"Enter "<<i+1<<"th term:- ";
//         cin>>ptr[i];
//     }
//     cout<<endl<<"Here is your data:"<<endl;
//     for(i=0; i<3; i++)
//     {
//         cout<<ptr[i]<<" ";
//     }
//     delete[] ptr;
// }