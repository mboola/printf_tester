#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	char	*str = "";

	ft_printf("----Start of complex tests of ft_printf----\n");
	ft_printf("Count of output with empty string: %d\n", ft_printf("%s", str) == printf("%s", str));
	ft_printf("Count of output with one int: %d\n", ft_printf("%d", 0) == printf("%d", 0));
	ft_printf("---- End of complex tests of ft_printf ----\n");
	return (0);
}
