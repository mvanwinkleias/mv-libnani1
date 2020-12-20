#include <config.h>
#include <stdio.h>

#include "nani1.h"

int main (void) {
	puts ("Hello world from " PACKAGE_STRING);
	nani1_hello();
	return 0;
}
