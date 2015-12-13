#include <stdio.h>
#include <complex.h>
/* structure called complex with two components, x and y
We will interpret the component x as the real part, 
and y as the imaginary part
*/
typedef struct _complex {
	long double x, // real 
	long double y*I // imaginary
} complex;

/* function mult2 that takes two complex structures, a and b,
and returns a complex structure representing their product. 
[Recall if a = x1 + y1 i and b = x2 + y2 i, 
then a * b = (x1 * x2 - y1 * y2) + (x1 * y2 + x2 * y1) i ]
*/
int mult2(struct a, struct b) {
	struct _complex c{
		(a.x * b.x - a.y * b.y), 
		(a.x * b.y + b.x * a.y) * i
	};
	return c;
}; 

/* function square that takes a complex structure and returns
the square of that structure
*/
int square(struct a) {
	struct _complex sq{
		a.x*a.x,
		a.y*a.y
	};
	return sq;
};

/*  function add2 that takes two complex structures, a and b, and
returns a complex structure representing their sum. 
[Recall if a = x1 + y1 i and b = x2 + y2 i, then a + b = 
(x1 + x2) + (y1 + y2) i ]
*/

int add2(struct a, struct b) {
	struct _complex add{
		a.x + b.x,
		a.y + b.y + i
	};
	return add;
};

/* function juliamap that takes two complex structures, z and c,
and returns a complex structure representing the juliamap: z^2 + c.
*/

int juliamap(struct z, struct c) {
	return add2(square(z), c);
};

/*
complex_print that takes a complex structure, z, and
prints the string "z = x + y i" where x and y are its 
real and imaginary parts.
*/

int complex_print() {
	printf("z = %d + %di", z.x, z.y);
};

/*
 function test that demonstrates that the functions (mult2,
square, add2, juliamap, complex_to_str) work as desired by 
printing to the screen.
*/

int test(a, b) {

}

int main() {

	test(a, b);

 	return 0;
}
