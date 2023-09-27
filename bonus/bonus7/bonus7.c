#include <stdio.h>

int	ft_printft(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printft("----Start of all bonus tests '#' of ft_printft----\n");

	ft_printft("(c &  ):"); len = ft_printft("% c", 'c'); ft_printft("|| len = %d\n", len);

	ft_printft("(s & -3):"); len = ft_printft("%-3s", "012345"); ft_printft("|| len = %d\n", len);

	ft_printft("(d & -2):"); len = ft_printft("%-2d", 42); ft_printft("|| len = %d\n", len);

	ft_printft("(i & -3):"); len = ft_printft("%-3i", 42); ft_printft("|| len = %d\n", len);

	ft_printft("(u & -2):"); len = ft_printft("%-2u", 42); ft_printft("|| len = %d\n", len);

	ft_printft("(x & - ):"); len = ft_printft("%-x", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(x & -1):"); len = ft_printft("%-1x", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(x & -2):"); len = ft_printft("%-2x", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(x & -3):"); len = ft_printft("%-3x", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(x & -10):"); len = ft_printft("%-10x", 42); ft_printft("|| len = %d\n", len);

	ft_printft("(X & - ):"); len = ft_printft("%-X", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(X & -1):"); len = ft_printft("%-1X", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(X & -2):"); len = ft_printft("%-2X", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(X & -3):"); len = ft_printft("%-3X", 42); ft_printft("|| len = %d\n", len);
	ft_printft("(X & -10):"); len = ft_printft("%-10X", 42); ft_printft("|| len = %d\n", len);
	ft_printft("---- End of all bonus tests '#' of ft_printft ----\n");
	return (0);
}
