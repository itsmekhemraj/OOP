// #include <iostream>
// using namespace std;
// class rectangle
// {
// 	int l, b;
// 	float fl, fb;
// 	public:
// 	void setrectangle (int x, int y)
// 	{
// 		l= x;
// 		b= y;
// 	}
// 	void setrectangle(float x, float y)
// 	{
// 		fl= x;
// 		fb= y;
// 	}
// 	int area()
// 	{
// 		return l*b;
// 	}
// 	float area(double a)
// 	{
// 		return fl*fb;
// 	}
// };
// int main()
// {
// 	rectangle r;
// 	int a= 4, b= 5;
// 	float x= 4.5, y= 5.5;
// 	r.setrectangle(a, b);
// 	r.setrectangle(x, y);
// 	int area;
// 	area= r.area();
// 	float area2;
// 	area2= r.area(1.0);
// 	cout<<area<<endl;
// 	cout<<area2<<endl;
// 	return 0;
// }



// #include <iostream>
// using namespace std;
// void sum()
// {
// 	int a= 5, b= 8;
// 	cout<<endl<<"The sum is:- "<<a+b;
// }
// void sum(int a=100, int b)
// {
// 	cout<<endl<<"The sum is int int:- "<<a+b;
// }
// void sum(float x)
// {
// 	cout<<endl<<"The vale is:- "<<x;
// }
// int main()
// {
// 	int a= 3, b= 8;
// 	float x= 7.9;
// 	sum();
// 	sum(a, b);
// 	sum(x);
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int sum(int a=3, int b=4, int c=5)
// {
// 	return (a+b+c);
// }
// int main()
// {
// 	int a= 2, b= 8;
// 	cout<<sum(5, 13);
// 	return 0;
// }

#include <iostream>
using namespace std;
void sum()
{
	int x= 10, y= 50;
	cout<<endl<<"The sum from 1st is:- "<<x+y;
}
void sum(int a, float b=5.6)
{
	cout<<endl<<"The sum from 2nd is:- "<<a+b;
}
void sum(float p, int q, float r)
{
	cout<<endl<<"The sum from 3rd is:- "<<p+q+r;
}
int main()
{
	// sum();
	sum(5, 5);
	// sum(2.5, 8, 4.6);
	return 0;
}