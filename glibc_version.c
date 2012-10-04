#include <stdio.h>
#include <unistd.h>
#include <gnu/libc-version.h>

void main() {
	const char * glibc_version = gnu_get_libc_version();
//	glibc_version[0] = "a";
	const char * glibc_release = gnu_get_libc_release();
	confstr(_CS_GNU_LIBC_VERSION_);
	printf("%s.%s\n",glibc_version,glibc_release);
}

