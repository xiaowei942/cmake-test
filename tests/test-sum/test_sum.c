#include <stdio.h>
#include "libhello.h"

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	int ret = sum(a, b);

	printf("RESULT: %d\n", ret);
	return 0;
}
