#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	zero = 0;
	int	max_int = 2147483647;
	int	min_int = -2147483648;
	char	*null_str;

	null_str = NULL;
	ft_printf("----Start of all simple tests of ft_printf----\n");
	ft_printf("(c) Char: %c\n", 'a');
	ft_printf("(c) Non-ascii char: %c\n", 'a');
	ft_printf("(s) String: %s\n", "abc");
	ft_printf("(s) Empty string: %s\n", "");
	ft_printf("(s) NULL string: %s\n", null_str);
	ft_printf("(i) Normal int: %i\n", 42);
	ft_printf("(i) Zero: %i\n", zero);
	ft_printf("(i) Negative int: %i\n", -42);
	ft_printf("(i) Max int: %i\n", max_int);
	ft_printf("(i) Min int: %i\n", min_int);
	ft_printf("(d) Normal int: %d\n", 42);
	ft_printf("(d) Zero: %d\n", zero);
	ft_printf("(d) Negative int: %d\n", -42);
	ft_printf("(d) Max int: %d\n", max_int);
	ft_printf("(d) Min int: %d\n", min_int);
	ft_printf("(u) Normal int: %u\n", 42);
	ft_printf("(u) Zero: %u\n", zero);
	ft_printf("(u) Negative int: %u\n", -42);
	ft_printf("(u) Max int: %u\n", max_int);
	ft_printf("(u) Min int: %u\n", min_int);
	ft_printf("(x) Normal int: %x\n", 42);
	ft_printf("(x) Zero: %x\n", zero);
	ft_printf("(x) Negative int: %x\n", -42);
	ft_printf("(x) Max int: %x\n", max_int);
	ft_printf("(x) Min int: %x\n", min_int);
	ft_printf("(X) Normal int: %X\n", 42);
	ft_printf("(X) Zero: %X\n", zero);
	ft_printf("(X) Negative int: %X\n", -42);
	ft_printf("(X) Max int: %X\n", max_int);
	ft_printf("(X) Min int: %X\n", min_int);
	ft_printf("Percent: %%\n");
	ft_printf("---- End of all simple tests of ft_printf ----\n");
	return (0);
}
