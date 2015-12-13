/* structure called complex with two components, x and y
We will interpret the component x as the real part, 
and y as the imaginary part
*/
struct COMPLEX {
	long double x; // real 
	long double y; // imaginary
};

typedef struct COMPLEX complex;

// functions declarations passing variables by reference: mult2 amd add2
// functions declarations passing variables by value: sqaure and juliamap
complex mult2(complex *a, complex *b);
complex square(complex a);
complex add2(complex *a, complex *b);
complex juliamap(complex a, complex b);
void complex_print(const complex z);
void test(void);


