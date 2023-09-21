#include <stdio.h>

//int	printf(char const *str, ...);

int	main(void)
{
	int	len;

	printf("----Start of all bonus tests of printf----\n");
	printf("(s & 1):"); len = printf("%1s", "012345"); printf("|| len = %d\n", len);
	printf("(s & 2):"); len = printf("%2s", "012345"); printf("|| len = %d\n", len);
	printf("(s & 3):"); len = printf("%3s", "012345"); printf("|| len = %d\n", len);
	printf("(s & 10):"); len = printf("%10s", "012345"); printf("|| len = %d\n", len);

	printf("(d & 0):"); len = printf("%0d", 42); printf("|| len = %d\n", len);
	printf("(d & 1):"); len = printf("%1d", 42); printf("|| len = %d\n", len);
	printf("(d & 2):"); len = printf("%2d", 42); printf("|| len = %d\n", len);
	printf("(d & 3):"); len = printf("%3d", 42); printf("|| len = %d\n", len);
	printf("(d & 10):"); len = printf("%10d", 42); printf("|| len = %d\n", len);

	printf("(i & 0):"); len = printf("%0i", 42); printf("|| len = %d\n", len);
	printf("(i & 1):"); len = printf("%1i", 42); printf("|| len = %d\n", len);
	printf("(i & 2):"); len = printf("%2i", 42); printf("|| len = %d\n", len);
	printf("(i & 3):"); len = printf("%3i", 42); printf("|| len = %d\n", len);
	printf("(i & 10):"); len = printf("%10i", 42); printf("|| len = %d\n", len);

	printf("(u & 0):"); len = printf("%0u", 42); printf("|| len = %d\n", len);
	printf("(u & 1):"); len = printf("%1u", 42); printf("|| len = %d\n", len);
	printf("(u & 2):"); len = printf("%2u", 42); printf("|| len = %d\n", len);
	printf("(u & 3):"); len = printf("%3u", 42); printf("|| len = %d\n", len);
	printf("(u & 10):"); len = printf("%10u", 42); printf("|| len = %d\n", len);

	printf("(x & 0):"); len = printf("%0x", 42); printf("|| len = %d\n", len);
	printf("(x & 1):"); len = printf("%1x", 42); printf("|| len = %d\n", len);
	printf("(x & 2):"); len = printf("%2x", 42); printf("|| len = %d\n", len);
	printf("(x & 3):"); len = printf("%3x", 42); printf("|| len = %d\n", len);
	printf("(x & 10):"); len = printf("%10x", 42); printf("|| len = %d\n", len);

	printf("(X & 0):"); len = printf("%0X", 42); printf("|| len = %d\n", len);
	printf("(X & 1):"); len = printf("%1X", 42); printf("|| len = %d\n", len);
	printf("(X & 2):"); len = printf("%2X", 42); printf("|| len = %d\n", len);
	printf("(X & 3):"); len = printf("%3X", 42); printf("|| len = %d\n", len);
	printf("(X & 10):"); len = printf("%10X", 42); printf("|| len = %d\n", len);
	printf("---- End of all bonus tests of printf ----\n");
	return (0);
}
