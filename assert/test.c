#include <stdio.h>

void myAssert(char *mesg)
{
	fputs(mesg,stderr);
};
int main(int argc,char *argv[])
{
	myAssert(__FILE__ ":" "error\n");
}
