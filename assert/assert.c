#define NDEBUG
#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static int val = 0;
static void field_abort(int sig)
{
	if(val == 1)
	{
		puts("SUCESS testing <assert.h>");
		exit(EXIT_SUCCESS);
	}
	else
	{
		puts("FAILURE testing <assert.h>");
		exit(EXIT_FAILURE);
	}
}
static void dummy()
{
	int i = 0;
	assert(i == 0);
	assert(i == 1);
}
#undef NDEBUG
#include <assert.h>
int main()
{
	printf("%d\n",val==0);
	assert(signal(SIGABRT,&field_abort) != SIG_ERR);
	dummy();
	assert(val == 0);
	++val;
	fputs("Sample assertion failure message --\n",stderr);
	assert(val == 0);
	puts("FAILURE testing <assert.h>");
	return (EXIT_FAILURE);
	return 0;
}
