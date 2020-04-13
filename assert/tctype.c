#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

static void prclass(const char *name,int (*fn)(int))
{
	int c;
	fputs(name,stdout);
	fputs(":",stdout);
	for(c = EOF;c <= UCHAR_MAX;++c)
	{
		if((*fn)(c))
		{
			fputc(c,stdout);
		}
		fputs("\n",stdout);
	}
}
int main()
{
	char *s;
	int c;
	//printf("%d %d",EOF,UCHAR_MAX);
	//prclass("isdigit",&isdigit);
	//prclass("isupper",&isupper);
	//prclass("isalpha",&isalpha);
	//prclass("isalnum",&isalnum);
	//test macros for required characters
	for(s = "0123456789";*s;++s)
		assert(isdigit(*s)&&isxdigit(*s));
	return 0;
}

