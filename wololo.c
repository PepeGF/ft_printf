#include <stdio.h>
#include <unistd.h>

int main()
{
	int x = 2;
	int y;

	y = printf("%p", -1);
	printf("\n");
	y = printf("%lx", -1);
	printf("\n------------\n");
	printf("%i\n",y);
	return (0);
}
