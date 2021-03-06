#include <stdio.h>
#include <complex.h>

/* function mult2 that takes two complex structures, a and b,
and returns a complex structure representing their product. 
[Recall if a = x1 + y1 i and b = x2 + y2 i, 
then a * b = (x1 * x2 - y1 * y2) + (x1 * y2 + x2 * y1) i ]
*/
complex mult2(complex a, complex b) {
	complex c;
	c.x = (a.x * b.x - a.y * b.y);
	c.y = (a.x * b.y + b.x * a.y);
	return c;
}; 

/* function square that takes a complex structure and returns
the square of that structure
*/
complex square(complex a) {
	complex sq;
	sq.x = a.x*a.x - a.y*a.y;
	sq.y = 2*a.x*a.y;
	return sq;
};

/*  function add2 that takes two complex structures, a and b, and
returns a complex structure representing their sum. 
[Recall if a = x1 + y1 i and b = x2 + y2 i, then a + b = 
(x1 + x2) + (y1 + y2) i ]
*/

complex add2(complex a, complex b) {
	complex add;
	add.x = a.x + b.x;
	add.y = a.y + b.y;
	return add;
};

/* function juliamap that takes two complex structures, z and c,
and returns a complex structure representing the juliamap: z^2 + c.
*/

int juliamap(complex a, complex b) {
	complex jm;
	jm = add2(square(a), b);
	return jm;
};

/*
complex_print that takes a complex structure, z, and
prints the string "z = x + y i" where x and y are its 
real and imaginary parts.
*/

int complex_print(complex z) {
	printf("z = %1f + %1fi", z.x, z.y);
};

/*
 function test that demonstrates that the functions (mult2,
square, add2, juliamap, complex_to_str) work as desired by 
printing to the screen.
*/

void test() {
	complex a, b;
	a.x = 2.0;
	a.y = 3.0;
	b.x = 4;
	b.y = 5;
	printf("Input a and b where a + ib is the first complex number.\n");
	printf("a = ");
	scanf("%f", &a.x);
	printf("b = ");
	scanf("%f", &a.y);
	printf("Input c and d where c + id is the second complex number.\n");
	printf("c = ");
	scanf("%f", &b.x);
	printf("d = ");
	scanf("%f", &b.y);
	printf ("You have entered the complex numbers :%.1f %+.1f and %.1f %+.1fi\n", a.x,a.y,b.x,b.y);
	printf ("Testing multiplication of complex numbers are :%.1f %+.1fi\n", mult2(a,b).x, mult2(a,b).y);
	printf ("Testing square of complex number is :%.1f %+.1fi\n", square(a).x, square(a).y);
	printf ("Testing addition of complex numbers are :%.1f %+.1fi\n", add2(a,b).x, add2(a,b).y);
	printf ("Testing juliamap of complex numbers are :%.1f %+.1fi\n", juliamap(a,b).x, juliamap(a,b).y);
	complex_print(a);
	complex_print(b);
}

int main(void) {

	test();
 	return 0;
}
