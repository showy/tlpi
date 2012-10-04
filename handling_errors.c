#include "lib/tlpi_hdr.h"

void main() {
	char * blah = strerror(-2);
	printf("%s\n" , blah);
	perror(blah);
}
