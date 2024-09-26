#include "complex.h"

t_complex add(t_complex comp1, t_complex comp2)
{
	t_complex result;

	result.real = comp1.real + comp2.real;
	result.imaginary = comp1.imaginary + comp2.imaginary;
	return result;
}

t_complex multiply(t_complex comp1, t_complex comp2)
{
	t_complex result;

	result.real = comp1.real * comp2.real - comp1.imaginary * comp2.imaginary;
	result.imaginary = comp1.imaginary * comp2.real + comp1.real * comp2.imaginary;
	return result;
}
