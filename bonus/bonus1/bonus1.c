#include <stdio.h>

//int	printf(char const *str, ...);

int	main(void)
{
	int	len;

	printf("----Start of all bonus tests '.' of printf----\n");
	printf("(s & .) :"); len = printf("%.s", "0123456789"); printf("|| len = %d\n", len);
	printf("(s & .0):"); len = printf("%.0s", "0123456789"); printf("|| len = %d\n", len);
	printf("(s & .1):"); len = printf("%.1s", "0123456789"); printf("|| len = %d\n", len);
	printf("(s & .2):"); len = printf("%.2s", "0123456789"); printf("|| len = %d\n", len);
	printf("(s & .3):"); len = printf("%.3s", "0123456789"); printf("|| len = %d\n", len);

	printf("(d & .):"); len = printf("%.d", 42); printf("|| len = %d\n", len);
	printf("(d & .0):"); len = printf("%.0d", 42); printf("|| len = %d\n", len);
	printf("(d & .1):"); len = printf("%.1d", 42); printf("|| len = %d\n", len);
	printf("(d & .2):"); len = printf("%.2d", 42); printf("|| len = %d\n", len);
	printf("(d & .3):"); len = printf("%.3d", 42); printf("|| len = %d\n", len);

	printf("(i & .):"); len = printf("%.i", 42); printf("|| len = %d\n", len);
	printf("(i & .0):"); len = printf("%.0i", 42); printf("|| len = %d\n", len);
	printf("(i & .1):"); len = printf("%.1i", 42); printf("|| len = %d\n", len);
	printf("(i & .2):"); len = printf("%.2i", 42); printf("|| len = %d\n", len);
	printf("(i & .3):"); len = printf("%.3i", 42); printf("|| len = %d\n", len);

	printf("(u & .):"); len = printf("%.u", 42); printf("|| len = %d\n", len);
	printf("(u & .0):"); len = printf("%.0u", 42); printf("|| len = %d\n", len);
	printf("(u & .1):"); len = printf("%.1u", 42); printf("|| len = %d\n", len);
	printf("(u & .2):"); len = printf("%.2u", 42); printf("|| len = %d\n", len);
	printf("(u & .3):"); len = printf("%.3u", 42); printf("|| len = %d\n", len);

	printf("(x & .):"); len = printf("%.x", 42); printf("|| len = %d\n", len);
	printf("(x & .0):"); len = printf("%.0x", 42); printf("|| len = %d\n", len);
	printf("(x & .1):"); len = printf("%.1x", 42); printf("|| len = %d\n", len);
	printf("(x & .2):"); len = printf("%.2x", 42); printf("|| len = %d\n", len);
	printf("(x & .3):"); len = printf("%.3x", 42); printf("|| len = %d\n", len);

	printf("(X & .):"); len = printf("%.X", 42); printf("|| len = %d\n", len);
	printf("(X & .0):"); len = printf("%.0X", 42); printf("|| len = %d\n", len);
	printf("(X & .1):"); len = printf("%.1X", 42); printf("|| len = %d\n", len);
	printf("(X & .2):"); len = printf("%.2X", 42); printf("|| len = %d\n", len);
	printf("(X & .3):"); len = printf("%.3X", 42); printf("|| len = %d\n", len);
	printf("---- End of all bonus tests '.' of printf ----\n");
	return (0);
}
