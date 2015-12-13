#include <stdio.h>
#include "complex.h"

/* function mult2 that takes two complex structures, a and b,
and returns a complex structure representing their product. 
[Recall if a = x1 + y1 i and b = x2 + y2 i, 
then a * b = (x1 * x2 - y1 * y2) + (x1 * y2 + x2 * y1) i ]
*/

int main(void) {

	test();
 	return 0;
}

complex mult2(complex *a,  complex *b) {
	complex c;
	c.x = a->x*b->x - a->y*b->y;
	c.y = a->x*b->y+a->y*b->x;
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

complex add2(complex *a, complex *b) {
	complex add;
	add.x = a->x + b->x;
	add.y = a->y+b->y;
	return add;
};

/* function juliamap that takes two complex structures, z and c,
and returns a complex structure representing the juliamap: z^2 + c.
*/

complex juliamap(complex a, complex b) {
	complex jm, a_tmp;
	a_tmp = square(a);
	jm = add2(&a_tmp, &b);
	return jm;
};

/*
complex_print that takes a complex structure, z, and
prints the string "z = x + y i" where x and y are its 
real and imaginary parts.
*/

void complex_print(const complex z) {
	printf ("z = %.1Lf+%.1Lfi\n",z.x,z.y);
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
	scanf("%Lf", &a.x);
	printf("b = ");
	scanf("%Lf", &a.y);
	printf("Input c and d where c + id is the second complex number.\n");
	printf("c = ");
	scanf("%Lf", &b.x);
	printf("d = ");
	scanf("%Lf", &b.y);
	printf ("You have entered the complex numbers entered are :%.1Lf %+.1Lf and %.1Lf %+.1Lfi\n", a.x,a.y,b.x,b.y);
	printf ("The multiplication of complex numbers is :%.1Lf %+.1Lfi\n", mult2(&a,&b).x, mult2(&a,&b).y);
	printf ("The square of complex number is :%.1Lf %+.1Lfi\n", square(a).x, square(a).y);
	printf ("The addition of complex numbers are :%.1Lf %+.1Lfi\n", add2(&a,&b).x, add2(&a,&b).y);
	printf ("The juliamap of complex numbers are :%.1Lf %+.1Lfi\n", juliamap(a,b).x, juliamap(a,b).y);
	complex_print(a);
	complex_print(b);
}

