#include "lib/tlpi_hdr.h"

void main() {
	pid_t my_pid;
	my_pid = getpid();
	printf("Size of pid_t is: %d\n" , sizeof(my_pid) );
	printf("Size of mode_t id: %d\n" , sizeof(mode_t ) );
	printf("Size of uid_t id: %d\n" , sizeof(uid_t ) );
	printf("Size of clock_t id: %d\n" , sizeof(blkcnt_t ) );
} 

