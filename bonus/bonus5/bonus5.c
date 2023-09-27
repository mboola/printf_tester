#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests ' ' of ft_printf----\n");
	ft_printf("(c &  ):"); len = ft_printf("% c", 'c'); ft_printf("|| len = %d\n", len);
	
	ft_printf("(s &  ):"); len = ft_printf("% s", "012345"); ft_printf("|| len = %d\n", len);

	ft_printf("(d &   ):"); len = ft_printf("% d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  1):"); len = ft_printf("% 1d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  2):"); len = ft_printf("% 2d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  3):"); len = ft_printf("% 3d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d &  10):"); len = ft_printf("% 10d", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(i &   ):"); len = ft_printf("% i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  1):"); len = ft_printf("% 1i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  2):"); len = ft_printf("% 2i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  3):"); len = ft_printf("% 3i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i &  10):"); len = ft_printf("% 10i", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(u &  3):"); len = ft_printf("% 3u", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(x &   ):"); len = ft_printf("% x", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(X &   ):"); len = ft_printf("% X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("---- End of all bonus tests ' ' of ft_printf ----\n");
	return (0);
}
