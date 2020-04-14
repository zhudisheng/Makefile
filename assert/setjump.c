#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(void)
{
	printf("second\n");
	longjmp(buf,1);
}
void first(void)
{
	second();
	printf("first\n");
}
int main()
{
	if(!setjmp(buf))
	{
		first();
	}
	else
	{
		printf("main\n");
	}
	
	return 0;
}
