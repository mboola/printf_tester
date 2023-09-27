#include <stdio.h>

//int	printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '+' of ft_printf----\n");
	printf("(s & + ):"); len = printf("%+s", "012345"); printf("|| len = %d\n", len);

	printf("(d & + ):"); len = printf("%-d", 42); printf("|| len = %d\n", len);
	printf("(d & +1):"); len = printf("%-1d", 42); printf("|| len = %d\n", len);
	printf("(d & +2):"); len = printf("%-2d", 42); printf("|| len = %d\n", len);
	printf("(d & +3):"); len = printf("%-3d", 42); printf("|| len = %d\n", len);
	printf("(d & +10):"); len = printf("%-10d", 42); printf("|| len = %d\n", len);

	printf("(i & + ):"); len = printf("%-i", 42); printf("|| len = %d\n", len);
	printf("(i & +1):"); len = printf("%-1i", 42); printf("|| len = %d\n", len);
	printf("(i & +2):"); len = printf("%-2i", 42); printf("|| len = %d\n", len);
	printf("(i & +3):"); len = printf("%-3i", 42); printf("|| len = %d\n", len);
	printf("(i & +10):"); len = printf("%-10i", 42); printf("|| len = %d\n", len);

	printf("(u & +3):"); len = printf("%+3u", 42); printf("|| len = %d\n", len);

	printf("(x & +1):"); len = printf("%+1x", 42); printf("|| len = %d\n", len);

	printf("(X & +10):"); len = printf("%+10X", 42); printf("|| len = %d\n", len);
	printf("---- End of all bonus tests of printf ----\n");
	return (0);
}
