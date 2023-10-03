#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '-' of ft_printf----\n");
	//chars
	ft_printf("(c & -    ):"); len = ft_printf("%-c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & -   1):"); len = ft_printf("%-1c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & -   3):"); len = ft_printf("%-3c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & -  10):"); len = ft_printf("%-10c", 'c'); ft_printf("|| len = %d\n", len);
	//fchars
	//strings
	ft_printf("(s & -    ):"); len = ft_printf("%-s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & -   1):"); len = ft_printf("%-1s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & -   2):"); len = ft_printf("%-2s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & -   3):"); len = ft_printf("%-3s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & - 4.3):"); len = ft_printf("%-4.3s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & - 5.6):"); len = ft_printf("%-5.6s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & - 7.6):"); len = ft_printf("%-7.6s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & -  10):"); len = ft_printf("%-10s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & -15.10):"); len = ft_printf("%-15.10s", "012345"); ft_printf("|| len = %d\n", len);
	//fstrings
	//integers
	ft_printf("(u & -    ):"); len = ft_printf("%-u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -    ):"); len = ft_printf("%-u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -   1):"); len = ft_printf("%-1u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -   1):"); len = ft_printf("%-1u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -   3):"); len = ft_printf("%-3u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -   3):"); len = ft_printf("%-3u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & - 4.3):"); len = ft_printf("%-4.3u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & - 4.3):"); len = ft_printf("%-4.3u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -  10):"); len = ft_printf("%-10u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -  10):"); len = ft_printf("%-10u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -10.2):"); len = ft_printf("%-10.2u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -10.2):"); len = ft_printf("%-10.2u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -2.10):"); len = ft_printf("%-2.10u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & -2.10):"); len = ft_printf("%-2.10u", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(d & -    ):"); len = ft_printf("%-d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -    ):"); len = ft_printf("%-d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -   1):"); len = ft_printf("%-1d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -   1):"); len = ft_printf("%-1d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -   3):"); len = ft_printf("%-3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -   3):"); len = ft_printf("%-3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & - 4.3):"); len = ft_printf("%-4.3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & - 4.3):"); len = ft_printf("%-4.3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -  10):"); len = ft_printf("%-10d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -  10):"); len = ft_printf("%-10d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -2.10):"); len = ft_printf("%-2.10d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & -2.10):"); len = ft_printf("%-2.10d", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(i & -    ):"); len = ft_printf("%-i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -    ):"); len = ft_printf("%-i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -   1):"); len = ft_printf("%-1i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -   1):"); len = ft_printf("%-1i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -   3):"); len = ft_printf("%-3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -   3):"); len = ft_printf("%-3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & - 4.3):"); len = ft_printf("%-4.3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & - 4.3):"); len = ft_printf("%-4.3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -  10):"); len = ft_printf("%-10i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -  10):"); len = ft_printf("%-10i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -2.10):"); len = ft_printf("%-2.10i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & -2.10):"); len = ft_printf("%-2.10i", -42); ft_printf("|| len = %d\n", len);
	//fintegers
	//hexadecimal
	ft_printf("(x & -    ):"); len = ft_printf("%-x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -    ):"); len = ft_printf("%-x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -   1):"); len = ft_printf("%-1x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -   1):"); len = ft_printf("%-1x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -   3):"); len = ft_printf("%-3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -   3):"); len = ft_printf("%-3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & - 4.3):"); len = ft_printf("%-4.3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & - 4.3):"); len = ft_printf("%-4.3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -  10):"); len = ft_printf("%-10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -  10):"); len = ft_printf("%-10x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -2.10):"); len = ft_printf("%-2.10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & -2.10):"); len = ft_printf("%-2.10x", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(X & -    ):"); len = ft_printf("%-X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -    ):"); len = ft_printf("%-X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -   1):"); len = ft_printf("%-1X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -   1):"); len = ft_printf("%-1X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -   3):"); len = ft_printf("%-3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -   3):"); len = ft_printf("%-3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & - 4.3):"); len = ft_printf("%-4.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & - 4.3):"); len = ft_printf("%-4.3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -  10):"); len = ft_printf("%-10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -  10):"); len = ft_printf("%-10X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -2.10):"); len = ft_printf("%-2.10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & -2.10):"); len = ft_printf("%-2.10X", -42); ft_printf("|| len = %d\n", len);
	//fhexadecimal
	//pointers
	ft_printf("(p & -    ):"); len = ft_printf("%-p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -    ):"); len = ft_printf("%-p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -   1):"); len = ft_printf("%-1p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -   1):"); len = ft_printf("%-1p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -   3):"); len = ft_printf("%-3p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -   3):"); len = ft_printf("%-3p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -  10):"); len = ft_printf("%-10p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & -  10):"); len = ft_printf("%-10p", (void *)-42); ft_printf("|| len = %d\n", len);
	//fpointers
	ft_printf("---- End of all bonus tests '-' of ft_printf ----\n");
	return (0);
}
