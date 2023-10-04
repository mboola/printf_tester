#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '#' of ft_printf----\n");
	//integers
	ft_printf("(x & #    ):"); len = ft_printf("%#x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #    ):"); len = ft_printf("%#x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #1  ):"); len = ft_printf("%#1x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #1  ):"); len = ft_printf("%#1x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #3  ):"); len = ft_printf("%#3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #3  ):"); len = ft_printf("%#3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #3.3 ):"); len = ft_printf("%#3.3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #3.3 ):"); len = ft_printf("%#3.3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #4.3 ):"); len = ft_printf("%#4.3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #4.3 ):"); len = ft_printf("%#4.3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #5.3 ):"); len = ft_printf("%#5.3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #5.3 ):"); len = ft_printf("%#5.3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #10  ):"); len = ft_printf("%#10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #10  ):"); len = ft_printf("%#10x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #10.2):"); len = ft_printf("%#10.2x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #10.2):"); len = ft_printf("%#10.2x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #2.10):"); len = ft_printf("%#2.10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & #2.10):"); len = ft_printf("%#2.10x", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(X & #    ):"); len = ft_printf("%#X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #    ):"); len = ft_printf("%#X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #1  ):"); len = ft_printf("%#1X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #1  ):"); len = ft_printf("%#1X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #3  ):"); len = ft_printf("%#3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #3  ):"); len = ft_printf("%#3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #3.3 ):"); len = ft_printf("%#4.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #3.3 ):"); len = ft_printf("%#4.3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #4.3 ):"); len = ft_printf("%#4.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #4.3 ):"); len = ft_printf("%#4.3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #5.3 ):"); len = ft_printf("%#5.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #5.3 ):"); len = ft_printf("%#5.3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #10  ):"); len = ft_printf("%#10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #10  ):"); len = ft_printf("%#10X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #10.2):"); len = ft_printf("%310.2X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #10.2):"); len = ft_printf("%#10.2X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #2.10):"); len = ft_printf("%#2.10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & #2.10):"); len = ft_printf("%#2.10X", -42); ft_printf("|| len = %d\n", len);
	//finteger
	ft_printf("---- End of all bonus tests '#' of ft_printft ----\n");
	return (0);
}
