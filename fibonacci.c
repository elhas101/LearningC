#include <stdio.h>

/* the long double declaration of variables holds more bits
and thus can hold numbers up to 15 bits in length
*/

int main(void) {
 	// fibonacci sequence
	long double x=1;
	long double y=0;
	long double z;
	int i=0;

	for (i=0;i<100;i++) {
	   printf("%i: %Lf\n", i, z);
	   z=x+y;
	   y=x;
	   x=z;
	}

 	return 0;
}