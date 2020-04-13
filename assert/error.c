#include <assert.h>
#include <errno.h>
#include <math.h>
#include <stdio.h>

int main()
{
	assert(errno == 0);
	perror("No error reported as");
	errno = ERANGE;
	perror("Range error reported as");
	errno = 0;
	assert(errno == 0);
	sqrt(-1.0);
	perror("Domain error reported as");
	puts("SUCCESS testing<erron.h>");
	return 0;
}
