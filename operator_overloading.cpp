// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;
//     public:
//     complex(){}
//     complex(int r, int i)
//     {
//         real= r;
//         img= i;
//     }
//     void print()
//     {
//         cout<<real<<" + "<<img<<"i"<<endl;
//     }
//     complex operator +(complex c)
//     {
//         complex temp;
//         temp.real= real+c.real;
//         temp.img= img+c.img;
//         return temp;
//     }
// };
// int main()
// {
//     complex c1(5, 4);
//     complex c2(2, 5);
//     complex c3;
//     c3= c1+c2;
//     c3.print();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;
//     public:
//     complex() {}
//     complex(int x, int y)
//     {
//         real= x;
//         img= y;
//     }
//     complex operator + (complex c)
//     {
//         complex temp;
//         temp.real= real+c.real;
//         temp.img= img+c.img;
//         return temp;
//     }
//     void display()
//     {
//         cout<<endl<<real<<" + "<<img<<"i";
//     }
// };
// int main()
// {
//     complex c1(1, 2);
//     complex c2(3, 4);
//     complex c3;
//     c3= c1+c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class plane
// {
//     float x, y, z;
//     public:
//     void setplane(float, float, float);
//     void putplane();
//     void operator -();
// };
// void plane::setplane(float x1, float p1, float c1)
// {
//     x= x1;
//     y= p1;
//     z= c1;
// }
// void plane::putplane()
// {
//     cout<<"(x,y,z):- "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
// }
// void plane::operator-()
// {
//     x= -x;
//     y= -y;
//     z= -z;
// }
// int main()
// {
//     plane p;
//     p.setplane(1.1, 2.2, 3.3);
//     p.putplane();
//     -p;
//     p.putplane();
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class plane
// {
//     float x, y, z;
//     public:
//     void setplane(float, float, float);
//     void putplane();
//     friend void operator -(plane &);
// };
// void plane::setplane(float x1, float p1, float c1)
// {
//     x= x1;
//     y= p1;
//     z= c1;
// }
// void plane::putplane()
// {
//     cout<<"(x,y,z):- "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
// }
// void operator -(plane &p)
// {
//     p.x= -p.x;
//     p.y= -p.y;
//     p.z= -p.z;
// }
// int main()
// {
//     plane p;
//     p.setplane(1.1, 2.2, 3.3);
//     p.putplane();
//     -p;
//     p.putplane();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;
//     public:
//     complex (){}
//     complex (int r, int i)
//     {
//         real= r;
//         img= i;
//     }
//     void display()
//     {
//         cout<<real<<" + "<<img<<"i"<<endl;
//     }
//     friend complex operator+(complex, complex);
// };
// complex operator+(complex c1, complex c2)
// {
//     complex temp;
//     temp.real= c1.real+c2.real;
//     temp.img= c1.img+c2.img;
//     return temp;
// }
// int main()
// {
//     complex comp1(3, 4);
//     complex comp2(5, 6);
//     complex comp3;
//     comp3= comp1+comp2;
//     comp3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class matrix
// {
//     int mat[2][2], i, j;
//     public:
//     matrix() {}
//     matrix(int n)
//     {
//         for(i=0; i<2; i++)
//         {
//             for(j=0; j<2; j++)
//             {
//                 mat[i][j]= n++;
//             }
//         }
//     }
//     void get_data()
//     {
//         cout<<"Enter 2*2 matrix: "<<endl;
//         for(i=0; i<2; i++)
//         {
//             for(j=0; j<2; j++)
//             {
//                 cin>>mat[i][j];
//             }
//         }
//     }
//     matrix operator -(matrix mat1)
//     {
//         matrix res;
//         for(i=0; i<2; i++)
//         {
//             for(j=0; j<2; j++)
//             {
//                 res.mat[i][j]= mat[i][j]-mat1.mat[i][j];
//             }
//         }
//         return res;
//     }
//     void display()
//     {
//         for(i=0; i<2; i++)
//         {
//             for(j-0; j<2; j++)
//             {
//                 cout<<mat[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main()
// {
//     matrix M1(3), M2, M3;
//     M2.get_data();
//     M3= M1-M2;
//     cout<<"sub is:- "<<endl;
//     M3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;
//     public:
//     complex() {}
//     complex(int x, int y)
//     {
//         real= x;
//         img= y;
//     }
//     bool operator == (complex c)
//     {
//         bool flag=true;
//         if(c.real!=real && c.img!=img)
//         {
//             flag= false;
//         }
//         return flag;
//     }
// };
// int main()
// {
//     int r1, i1, r2, i2;
//     cout<<"1st complex:- ";
//     cin>>r1>>i1;
//     cout<<"2nd complex:- ";
//     cin>>r2>>i2;
//     complex c1(r1, i1);
//     complex c2(r2, i2);
//     if(c1==c2)
//     {
//         cout<<"OK";
//     }
//     else
//     {
//         cout<<"No";
//     }
//     return 0;
// }