#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>

#include "lib_app.h"

struct duo_t {
	int a;
	int b;
};

int main (void) {
	struct duo_t duo = {
		.a = 1,
		.b = 2
	};
	printf("Before switch : a= %d, b= %d\r\n", duo.a, duo.b);
	if (0 == fakeAPI(&(duo.a), &(duo.b)))
        	printf("After switch : a= %d, b= %d\r\n",
			duo.a, duo.b);
	else
		printf("Error on fakeAPI function\r\n");
	return 0;
}
