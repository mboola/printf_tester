#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '0' of ft_printf----\n");
	//integers
	ft_printf("(u &  0):"); len = ft_printf("%0u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u &  0):"); len = ft_printf("%0u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 01):"); len = ft_printf("%01u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 01):"); len = ft_printf("%01u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 010):"); len = ft_printf("%010u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 010):"); len = ft_printf("%010u", -42); ft_printf("|| len = %d\n", len);
	
	ft_printf("(i &  0):"); len = ft_printf("%0i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  0):"); len = ft_printf("%0i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 01):"); len = ft_printf("%01i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 01):"); len = ft_printf("%01i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 010):"); len = ft_printf("%010i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 010):"); len = ft_printf("%010i", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(d &  0):"); len = ft_printf("%0d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  0):"); len = ft_printf("%0d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 01):"); len = ft_printf("%01d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 01):"); len = ft_printf("%01d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 010):"); len = ft_printf("%010d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 010):"); len = ft_printf("%010d", -42); ft_printf("|| len = %d\n", len);
	//fintegers
	//hexadecimal
	ft_printf("(x &  0):"); len = ft_printf("%0x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x &  0):"); len = ft_printf("%0x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 01):"); len = ft_printf("%01x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 01):"); len = ft_printf("%01x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 010):"); len = ft_printf("%010x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 010):"); len = ft_printf("%010x", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(X &  0):"); len = ft_printf("%0X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X &  0):"); len = ft_printf("%0X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 01):"); len = ft_printf("%01X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 01):"); len = ft_printf("%01X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 010):"); len = ft_printf("%010X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 010):"); len = ft_printf("%010X", -42); ft_printf("|| len = %d\n", len);
	//fhexadecimal
	ft_printf("---- End of all bonus tests '0' of ft_printf ----\n");
	return (0);
}
