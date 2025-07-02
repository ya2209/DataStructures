#include <stdio.h>
//复数的实现1
typedef struct {
	float realpart;
	float imagepart;
}Complex;
void assign(Complex* A, float real, float image)
{
	A->imagepart = image;
	A->realpart = real;
}
void add(Complex* A, Complex B, Complex C)
{
	A->imagepart = B.imagepart + C.imagepart;
	A->realpart = B.realpart + C.realpart;

}
void multiply(Complex* A, Complex b, Complex c)
{
	A->realpart = b.realpart * c.realpart + b.imagepart + c.imagepart;
	A->imagepart = b.realpart * c.imagepart + b.imagepart * c.realpart;
}
void OutComplex(Complex A)
{
	// 输出复数
	if (A.realpart > 0)
		printf("%f+%fi", A.realpart, A.imagepart);
	else printf("%f%fi", A.realpart, A.imagepart);
}
void divide(Complex* A, Complex b, Complex c)
{


};
void main()
{

	Complex z1, z2, z3, z4;
	float realpart;
	float imagepart;
	assign(&z1, 8.0, 6.0);
	assign(&z2, 1.0, 1.0);
	multiply(&z3, z1, z2);
	OutComplex(z3);



}