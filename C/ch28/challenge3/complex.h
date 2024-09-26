#ifndef COMPLEX_H
# define COMPLEX_H

typedef struct s_complex
{
	double real;
	double imaginary;
} t_complex;

t_complex add(t_complex comp1, t_complex comp2);
t_complex multiply(t_complex comp1, t_complex comp2);

#endif
