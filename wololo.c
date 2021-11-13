#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main()
{
	printf("%ld\n", -ULONG_MAX);
	return (0);
}
