#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests 'num' of ft_printf----\n");
	//chars
	ft_printf("(c &  1):"); len = ft_printf("%1c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c &  2):"); len = ft_printf("%2c", 'c'); ft_printf("|| len = %d\n", len);
	//fchars
	//pointers
	ft_printf("(p &  1):"); len = ft_printf("%1p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p &  2):"); len = ft_printf("%2p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & 20):"); len = ft_printf("%20p", (void *)42); ft_printf("|| len = %d\n", len);
	//fpointers
	//string
	ft_printf("(s &  1):"); len = ft_printf("%1s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & 10):"); len = ft_printf("%10s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & 15):"); len = ft_printf("%15s", "0123456789"); ft_printf("|| len = %d\n", len);
	//fstrings
	//integers
	ft_printf("(u &  1):"); len = ft_printf("%1u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u &  1):"); len = ft_printf("%1u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 10):"); len = ft_printf("%10u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 10):"); len = ft_printf("%10u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 15):"); len = ft_printf("%15u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & 15):"); len = ft_printf("%15u", -42); ft_printf("|| len = %d\n", len);
	
	ft_printf("(i &  1):"); len = ft_printf("%1i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  1):"); len = ft_printf("%1i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 10):"); len = ft_printf("%10i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 10):"); len = ft_printf("%10i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 15):"); len = ft_printf("%15i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & 15):"); len = ft_printf("%15i", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(d &  1):"); len = ft_printf("%1d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  1):"); len = ft_printf("%1d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 10):"); len = ft_printf("%10d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 10):"); len = ft_printf("%10d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 15):"); len = ft_printf("%15d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & 15):"); len = ft_printf("%15d", -42); ft_printf("|| len = %d\n", len);
	//fintegers
	//hexadecimal
	ft_printf("(x &  1):"); len = ft_printf("%1x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x &  1):"); len = ft_printf("%1x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 10):"); len = ft_printf("%10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 10):"); len = ft_printf("%10x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 15):"); len = ft_printf("%15x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & 15):"); len = ft_printf("%15x", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(X &  1):"); len = ft_printf("%1X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X &  1):"); len = ft_printf("%1X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 10):"); len = ft_printf("%10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 10):"); len = ft_printf("%10X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 15):"); len = ft_printf("%15X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & 15):"); len = ft_printf("%15X", -42); ft_printf("|| len = %d\n", len);
	//fhexadecimal
	ft_printf("---- End of all bonus tests 'num' of ft_printf ----\n");
	return (0);
}
