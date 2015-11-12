#include <stdio.h>
int main() {
 	// fibonacci sequence
	unsigned long long x=1,y=0,z,i;
	for (i=0;i<100;i++) {
	   printf("%i\n", x);
	   z=x+y;
	   y=x;
	   x=z;
	}
 	return 0;
}
