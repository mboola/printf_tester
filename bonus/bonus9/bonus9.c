#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of lo que paco me dice que no pasa of ft_printf----\n");

	ft_printf("(c  -5 {} ):"); len = ft_printf("{%-5c}", '\0'); ft_printf("|| len = %d\n", len);
	ft_printf("(d  10 {} ):"); len = ft_printf("{%10d}", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d   4 {} ):"); len = ft_printf("{%4d}", 10000); ft_printf("|| len = %d\n", len);
	ft_printf("(d  30 {} ):"); len = ft_printf("{%30d}", 10000); ft_printf("|| len = %d\n", len);
	ft_printf("(d  10 {} ):"); len = ft_printf("{%10d}", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(c   3 {} ):"); len = ft_printf("{%3c}", 0); ft_printf("|| len = %d\n", len);
	ft_printf("(d -10 {} ):"); len = ft_printf("{%-10d}", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(d  -4 {} ):"); len = ft_printf("{%-4d}", 10000); ft_printf("|| len = %d\n", len);
	ft_printf("(d -30 {} ):"); len = ft_printf("{%-30d}", 10000); ft_printf("|| len = %d\n", len);
	ft_printf("(d 03.2{} ):"); len = ft_printf("{%03.2d}", 0); ft_printf("|| len = %d\n", len);
	ft_printf("(d -50  t2):"); len = ft_printf("t2 %-50d", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 50.0 t3):"); len = ft_printf("t3 %50.0d", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 50.50t4):"); len = ft_printf("t4 %50.50d}", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 50.10t5):"); len = ft_printf("t5 %50.0d}", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 1.50 t7):"); len = ft_printf("t7 %1.50d}", -10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 1.50 t8):"); len = ft_printf("t8 %1.50d}", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 2.2  t9):"); len = ft_printf("t9 %2.2d}", 10); ft_printf("|| len = %d\n", len);
	ft_printf("(d 2.2 t10):"); len = ft_printf("t10 %2.2d}", -10); ft_printf("|| len = %d\n", len);
	ft_printf("(d  10 t14):"); len = ft_printf("t14 %10d}", 1000); ft_printf("|| len = %d\n", len);
	
	ft_printf("(x  #  0  ):"); len = ft_printf(" %#x ", 0); ft_printf("|| len = %d\n", len);
	
	ft_printf("(%%   5   ):"); len = ft_printf("%5%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%%   -5  ):"); len = ft_printf("%-5%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%%  -05  ):"); len = ft_printf("%-05%"); ft_printf("|| len = %d\n", len);
	ft_printf("(s   . 03 ):"); len = ft_printf("%.03s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   3.1  ):"); len = ft_printf("%3.1s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   9.1  ):"); len = ft_printf("%9.1s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   -3.1 ):"); len = ft_printf("%-3.1s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   -9.1 ):"); len = ft_printf("%-9.1s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   .4   ):"); len = ft_printf("%.4s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(s   50.2 ):"); len = ft_printf("%50.2s", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(%%   12  ):"); len = ft_printf("%12%", NULL); ft_printf("|| len = %d\n", len);
	ft_printf("(%%   -12 ):"); len = ft_printf("%-12%", NULL); ft_printf("|| len = %d\n", len);

	ft_printf("----End of lo que paco me dice que no pasa of ft_printf----\n");
	return (0);
}
