#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	ft_printf("----Start of ptr tests of ft_printf----\n");
	ft_printf("%p\n", (void *)-1);
	ft_printf("%p\n", (void *)1);
	ft_printf("%p\n", (void *)100000000);
	ft_printf("%p\n", (void *)-100000000);
	ft_printf("%p %p \n", 0, 0);
	ft_printf("%-1p %-2p \n", 0, 0);
	ft_printf("---- End of ptr tests of ft_printf ----\n");
	return (0);
}