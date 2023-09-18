#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{ 
	ft_printf("%c\n", 'a');
	ft_printf("%s\n", "abc");
//	ft_printf("%p\n", 10);
	ft_printf("%d\n", 10);
	ft_printf("%i\n", 123);
//	ft_printf("%u\n", 321);
	ft_printf("%x\n", 15);
	ft_printf("%X\n", 15);
	ft_printf("%%\n");
	
/*/
	printf("%c\n", 'a');
	printf("%s\n", "abc");
//	printf("%p\n", 10);
	printf("%d\n", 10);
	printf("%i\n", 123);
//	printf("%u\n", 321);
	printf("%x\n", 15);
	printf("%X\n", 15);
	printf("%%\n");*/
	return (0);
}
