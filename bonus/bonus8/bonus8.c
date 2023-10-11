#include <stdio.h>

int	ft_printf(char const *str, ...);

int	main(void)
{
	int	len;

	ft_printf("----Start of all bonus overwrite tests of ft_printf----\n");
	//percentage
	ft_printf("(%% & 0 ):"); len = ft_printf("%0%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% & 01):"); len = ft_printf("%01%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% & 02):"); len = ft_printf("%02%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% & 1):"); len = ft_printf("%1%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% & 2):"); len = ft_printf("%2%"); ft_printf("|| len = %d\n", len);
	//fpercentage
	//chars
	/*
	ft_printf("(c &  0 ):"); len = ft_printf("%0c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c &  01):"); len = ft_printf("%01c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c &  02):"); len = ft_printf("%02c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & -10.2):"); len = ft_printf("%-10.2c", 'c'); ft_printf("|| len = %d\n", len);//
	ft_printf("(c & -2.10):"); len = ft_printf("%-2.10c", 'c'); ft_printf("|| len = %d\n", len);//
	//fchars
			//chars
	ft_printf("(c & ' '  ):"); len = ft_printf("% c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & ' '1 ):"); len = ft_printf("% 1c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & ' '3 ):"); len = ft_printf("% 3c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c & ' '10):"); len = ft_printf("% 10c", 'c'); ft_printf("|| len = %d\n", len);
	//fchars
	//pointers
	ft_printf("(p &  0):"); len = ft_printf("%0p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p &  0):"); len = ft_printf("%0p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & 01):"); len = ft_printf("%01p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & 01):"); len = ft_printf("%01p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & 010):"); len = ft_printf("%010p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & 010):"); len = ft_printf("%010p", (void *)-42); ft_printf("|| len = %d\n", len);
	//fpointers
	//pointers
	ft_printf("(p & ' '    ):"); len = ft_printf("% p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' '    ):"); len = ft_printf("% p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' ' 1  ):"); len = ft_printf("% 1p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' ' 1  ):"); len = ft_printf("% 1p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' ' 3  ):"); len = ft_printf("% 3p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' ' 3  ):"); len = ft_printf("% 3p", (void *)-42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' '10  ):"); len = ft_printf("% 10p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p & ' '10  ):"); len = ft_printf("% 10p", (void *)-42); ft_printf("|| len = %d\n", len);
	//fpointers
	//string
	ft_printf("(s &  0):"); len = ft_printf("%0s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & 01):"); len = ft_printf("%01s", "0123456789"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & 010):"); len = ft_printf("%010s", "0123456789"); ft_printf("|| len = %d\n", len);
	//fstrings
	//strings
	ft_printf("(s & ' '  ):"); len = ft_printf("% s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' ' 1):"); len = ft_printf("% 1s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' ' 2):"); len = ft_printf("% 2s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' ' 3):"); len = ft_printf("% 3s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' '4.3):"); len = ft_printf("% 4.3s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' '5.6):"); len = ft_printf("% 5.6s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' '7.6):"); len = ft_printf("% 7.6s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' '10):"); len = ft_printf("% 10s", "012345"); ft_printf("|| len = %d\n", len);
	ft_printf("(s & ' '15.10):"); len = ft_printf("% 15.10s", "012345"); ft_printf("|| len = %d\n", len);
	//fstrings
	//errors:
	ft_printf("(c &   . ) :"); len = ft_printf("%.c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c &   .2) :"); len = ft_printf("%.c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(c &  3.2) :"); len = ft_printf("%.c", 'c'); ft_printf("|| len = %d\n", len);
	ft_printf("(p &   . ):"); len = ft_printf("%.3p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p &   .3):"); len = ft_printf("%.3p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(p &  5.3):"); len = ft_printf("%.3p", (void *)42); ft_printf("|| len = %d\n", len);
	ft_printf("(%% &  . ):"); len = ft_printf("%.3%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% &  .3):"); len = ft_printf("%.3%"); ft_printf("|| len = %d\n", len);
	ft_printf("(%% & 5.3):"); len = ft_printf("%.3%"); ft_printf("|| len = %d\n", len);
	//ferrors
		//hexadecimal
	ft_printf("(x & ' '    ):"); len = ft_printf("% x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '    ):"); len = ft_printf("% x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' ' 1  ):"); len = ft_printf("% 1x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' ' 1  ):"); len = ft_printf("% 1x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' ' 3  ):"); len = ft_printf("% 3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' ' 3  ):"); len = ft_printf("% 3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '4.3 ):"); len = ft_printf("% 4.3x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '4.3 ):"); len = ft_printf("% 4.3x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '10  ):"); len = ft_printf("% 10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '10  ):"); len = ft_printf("% 10x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '10.2):"); len = ft_printf("% 10.2x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '10.2):"); len = ft_printf("% 10.2x", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '2.10):"); len = ft_printf("% 2.10x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & ' '2.10):"); len = ft_printf("% 2.10x", -42); ft_printf("|| len = %d\n", len);

	ft_printf("(X & ' '    ):"); len = ft_printf("% X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '    ):"); len = ft_printf("% X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' ' 1  ):"); len = ft_printf("% 1X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' ' 1  ):"); len = ft_printf("% 1X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' ' 3  ):"); len = ft_printf("% 3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' ' 3  ):"); len = ft_printf("% 3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '4.3 ):"); len = ft_printf("% 4.3X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '4.3 ):"); len = ft_printf("% 4.3X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '10  ):"); len = ft_printf("% 10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '10  ):"); len = ft_printf("% 10X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '10.2):"); len = ft_printf("% 10.2X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '10.2):"); len = ft_printf("% 10.2X", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '2.10):"); len = ft_printf("% 2.10X", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & ' '2.10):"); len = ft_printf("% 2.10X", -42); ft_printf("|| len = %d\n", len);
	//fhexadecimal

	ft_printf("(u & ' '    ):"); len = ft_printf("% u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '    ):"); len = ft_printf("% u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' ' 1  ):"); len = ft_printf("% 1u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' ' 1  ):"); len = ft_printf("% 1u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' ' 3  ):"); len = ft_printf("% 3u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' ' 3  ):"); len = ft_printf("% 3u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '4.3 ):"); len = ft_printf("% 4.3u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '4.3 ):"); len = ft_printf("% 4.3u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '10  ):"); len = ft_printf("% 10u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '10  ):"); len = ft_printf("% 10u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '10.2):"); len = ft_printf("% 10.2u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '10.2):"); len = ft_printf("% 10.2u", -42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '2.10):"); len = ft_printf("% 2.10u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & ' '2.10):"); len = ft_printf("% 2.10u", -42); ft_printf("|| len = %d\n", len);

		ft_printf("(c & +    ):"); len = ft_printf("%+c", '0'); ft_printf("|| len = %d\n", len);
	ft_printf("(p & +    ):"); len = ft_printf("%+p", (void *) 42); ft_printf("|| len = %d\n", len);
	ft_printf("(u & +    ):"); len = ft_printf("%+u", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(x & +    ):"); len = ft_printf("%+x", 42); ft_printf("|| len = %d\n", len);
	ft_printf("(X & +    ):"); len = ft_printf("%+X", 42); ft_printf("|| len = %d\n", len);
	*/
	ft_printf("---- End of all bonus overwrite tests of ft_printf ----\n");
	return (0);
}
