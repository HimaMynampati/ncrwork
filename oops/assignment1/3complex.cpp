#include<iostream>
using namespace std;
class Complex
{
	float real;
	float img;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(float r)
	{
		real = img = r;
	}
	Complex(float a, float b)
	{
		real = a;
		img = b;
	}
	void add_complex(Complex &c1, Complex &c2)
	{
		real = c1.real + c2.real;
		img = c1.img + c2.img;
		cout <<"Sum of the given two comples numbers is :" <<real << "+" << img<<"i"<<endl;
	}
	void mul_complex(Complex &c1, Complex &c2)
	{
		cout<<"Product of the given two complex numbers is :";
		cout << ((c1.real*c2.real) - (c1.img*c2.img)) << "+" << ((c1.real)*(c2.img) + (c1.img)*(c2.real))<<"i";
	}
};
int main()
{
	float real1,real2,img1,img2;
	cout<<"enter First numbers real and imaginary parts  ";
	cin>> real1>>img1;
	cout<<endl<<"enter Second numbers real and imaginary parts  ";
	cin>> real2>>img2;
	Complex c1(real1, img1), c2(real2, img2), c3;
	c3.add_complex(c1, c2);
	c3.mul_complex(c1, c2);
	return 0;
}
