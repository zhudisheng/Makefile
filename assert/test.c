#include <stdio.h>

void myAssert(char *mesg)
{
	fputs(mesg,stderr);
};
#define _VAL(x) #x
int main(int argc,char *argv[])
{
	int x = 10;
	myAssert(__FILE__ ":" "error\n"_VAL(a)"\n");
}
