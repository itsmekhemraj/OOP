   /*                                                 1D Array

    */


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout<<"Enter the number of element:- ";
//     cin>>n;
//     int *p= new int(n);
//     for(i=0; i<n; i++)
//     {
//         cout<<"Enter "<<(i+1)<<"th term:- ";
//         cin>>p[i];
//     }
//     cout<<endl<<endl;
//     for(i=0; i<n; i++)
//     {
//         cout<<"The "<<(i+1)<<"th term is:- "<<p[i]<<endl;
//     }
//     delete p;
//     return 0;
// }



   /*                                                 2D Array

    */




#include <iostream>
using namespace std;
int main()
{
    int **ptr;
    int row, col, i, j;
    cout << "Enter the number of rows:- ";  
    cin >> row;
    cout << "Enter the number of cols:- ";
    cin >> col;
    ptr = new int *[row];
    for (i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter the element at " << (i + 1) << "th and " << (j + 1) << "th term:- ";
            cin >> ptr[i][j];
        }
    }
    cout << "Here is your matrix:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        delete[] ptr[i];
    }

    delete[] ptr;
}