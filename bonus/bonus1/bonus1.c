#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus tests '.' of ft_printf----\n");
	ft_printf("(s & .) :"); len = ft_printf("%.s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & .0):"); len = ft_printf("%.0s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & .1):"); len = ft_printf("%.1s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & .2):"); len = ft_printf("%.2s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & .3):"); len = ft_printf("%.3s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & .20):"); len = ft_printf("%.20s", "0123456789"); ft_printf("|| len = %d\n", len);

	ft_printf("(d & .):"); len = ft_printf("%.d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & .0):"); len = ft_printf("%.0d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & .1):"); len = ft_printf("%.1d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & .2):"); len = ft_printf("%.2d", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d & .3):"); len = ft_printf("%.3d", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(i & .):"); len = ft_printf("%.i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & .0):"); len = ft_printf("%.0i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & .1):"); len = ft_printf("%.1i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & .2):"); len = ft_printf("%.2i", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(i & .3):"); len = ft_printf("%.3i", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(u & .):"); len = ft_printf("%.u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & .0):"); len = ft_printf("%.0u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & .1):"); len = ft_printf("%.1u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & .2):"); len = ft_printf("%.2u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & .3):"); len = ft_printf("%.3u", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(x & .):"); len = ft_printf("%.x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & .0):"); len = ft_printf("%.0x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & .1):"); len = ft_printf("%.1x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & .2):"); len = ft_printf("%.2x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & .3):"); len = ft_printf("%.3x", 42); ft_printf("|| len = %d\n", len);

	ft_printf("(X & .):"); len = ft_printf("%.X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & .0):"); len = ft_printf("%.0X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & .1):"); len = ft_printf("%.1X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & .2):"); len = ft_printf("%.2X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & .3):"); len = ft_printf("%.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("---- End of all bonus tests '.' of ft_printf ----\n");
	return (0);
}
