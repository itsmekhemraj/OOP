// writing and reading from file using constructor function

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20];
    float cost;   
    cout << "Enter item name:- ";
    cin >> name;
    cout << "Enter item cost:- ";
    cin >> cost;
    // ofstream fout("data.txt");
    ofstream fout;
    fout.open("data.txt");
    fout << name << endl;
    fout << cost << endl;
    fout.close();
    ifstream fin("data");
    // ifstream fin;
    // fin.open("data.txt");
    fin >> name;
    fin >> cost;
    cout << "\n Item name:- " << name;
    cout << "\n Item cost:- " << cost;
    fin.close();
    return 0;
}


// using open() function

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     char name[20];
//     int cost;
//     ofstream fout;
//     fout.open("data");
//     cout<<"Enter name:- ";
//     cin>>name;
//     cout<<"Enter cost:- ";
//     cin>>cost;
//     fout<<name<<endl;
//     fout<<cost<<endl;
//     fout.close();
//     ifstream fin;
//     fin.open("data");
//     fin>>name;
//     fin>>cost;
//     cout<<"\n Item name:- "<<name<<endl;
//     cout<<"\n Item cost:- "<<cost;
//     fin.close();
//     return 0;
// }



//  #include <iostream>
//  #include<fstream>
//  using namespace std;
//  int main()
//  {
//     int id[2], value[2], i;
//     ofstream fout;
//     fout.open("record.txt");
//     for(i=0; i<2; i++)
//     {
//         cout<<"Enter id of "<<i+1<<"th employee:- ";
//         cin>>id[i];
//         cout<<"Enter value of "<<i+1<<"th employee:- ";
//         cin>>value[i];
//     }
//     for(i=0; i<2; i++)
//     {
//         fout<<id[i]<<endl;
//         fout<<value[i]<<endl;
//     }
//     fout.close();
//     ifstream fin;
//     fin.open("record.txt");
//     for(i=0; i<2; i++)
//     {
//         fin>>id[i];
//         fin>>value[i];
//     }
//     for(i=0; i<2; i++)
//     {
//         cout<<i+1<<"th employee id:- "<<id[i]<<endl;
//         cout<<i+1<<"th employee value:- "<<value[i]<<endl;
//     }
//     fin.close();
//     return 0;
//  }


// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     string name;
//     int age;
//     cout<<"Enter name:- ";
//     cin>>name;
//     cout<<"Enter age:- ";
//     cin>>age;
//     ofstream fout;
//     fout.open("record");
//     fout<<name<<endl;
//     fout<<age<<endl;
//     fout.close();
//     ifstream fin;
//     fin.open("record");
//     fin>>name;
//     fin>>age;
//     cout<<endl<<"Name is:- "<<name<<endl;
//     cout<<endl<<"Age is:- "<<age<<endl;
//     fin.close();
//     return 0;
// }