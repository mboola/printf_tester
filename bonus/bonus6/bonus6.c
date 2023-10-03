#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '+' of ft_printf----\n");
	//integers
	ft_printf("(d & +    ):"); len = ft_printf("%+d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +    ):"); len = ft_printf("%+d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +1  ):"); len = ft_printf("%+1d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +1  ):"); len = ft_printf("%+1d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +3  ):"); len = ft_printf("%+3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +3  ):"); len = ft_printf("%+3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +3.3 ):"); len = ft_printf("%+3.3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +3.3 ):"); len = ft_printf("%+3.3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +4.3 ):"); len = ft_printf("%+4.3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +4.3 ):"); len = ft_printf("%+4.3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +5.3 ):"); len = ft_printf("%+5.3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +5.3 ):"); len = ft_printf("%+5.3d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +10  ):"); len = ft_printf("%+10d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +10  ):"); len = ft_printf("%+10d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +10.2):"); len = ft_printf("%+10.2d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +10.2):"); len = ft_printf("%+10.2d", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +2.10):"); len = ft_printf("%+2.10d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & +2.10):"); len = ft_printf("%+2.10d", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(i & +    ):"); len = ft_printf("%+i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +    ):"); len = ft_printf("%+i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +1  ):"); len = ft_printf("%+1i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +1  ):"); len = ft_printf("%+1i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +3  ):"); len = ft_printf("%+3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +3  ):"); len = ft_printf("%+3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +3.3 ):"); len = ft_printf("%+4.3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +3.3 ):"); len = ft_printf("%+4.3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +4.3 ):"); len = ft_printf("%+4.3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +4.3 ):"); len = ft_printf("%+4.3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +5.3 ):"); len = ft_printf("%+5.3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +5.3 ):"); len = ft_printf("%+5.3i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +10  ):"); len = ft_printf("%+10i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +10  ):"); len = ft_printf("%+10i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +10.2):"); len = ft_printf("%+10.2i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +10.2):"); len = ft_printf("%+10.2i", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +2.10):"); len = ft_printf("%+2.10i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & +2.10):"); len = ft_printf("%+2.10i", -42); ft_printf("|| len = %d\n", len);
	//fintegers
	ft_printf("---- End of all bonus tests '+' of ft_printf ----\n");
	return (0);
}
