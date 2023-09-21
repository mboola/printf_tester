#include <stdio.h>

//int	printf(char const *str, ...);

int	main(void)
{
	int	len;

	printf("----Start of all bonus tests '0' of printf----\n");
	printf("(d & 0):"); len = printf("%0d", 42); printf("|| len = %d\n", len);
	printf("(d & 01):"); len = printf("%01d", 42); printf("|| len = %d\n", len);
	printf("(d & 02):"); len = printf("%02d", 42); printf("|| len = %d\n", len);
	printf("(d & 03):"); len = printf("%03d", 42); printf("|| len = %d\n", len);
	printf("(d & 010):"); len = printf("%010d", 42); printf("|| len = %d\n", len);

	printf("(i & 0):"); len = printf("%0i", 42); printf("|| len = %d\n", len);
	printf("(i & 01):"); len = printf("%01i", 42); printf("|| len = %d\n", len);
	printf("(i & 02):"); len = printf("%02i", 42); printf("|| len = %d\n", len);
	printf("(i & 03):"); len = printf("%03i", 42); printf("|| len = %d\n", len);
	printf("(i & 010):"); len = printf("%010i", 42); printf("|| len = %d\n", len);

	printf("(u & 0):"); len = printf("%0u", 42); printf("|| len = %d\n", len);
	printf("(u & 01):"); len = printf("%01u", 42); printf("|| len = %d\n", len);
	printf("(u & 02):"); len = printf("%02u", 42); printf("|| len = %d\n", len);
	printf("(u & 03):"); len = printf("%03u", 42); printf("|| len = %d\n", len);
	printf("(u & 010):"); len = printf("%010u", 42); printf("|| len = %d\n", len);

	printf("(x & 0):"); len = printf("%0x", 42); printf("|| len = %d\n", len);
	printf("(x & 01):"); len = printf("%01x", 42); printf("|| len = %d\n", len);
	printf("(x & 02):"); len = printf("%02x", 42); printf("|| len = %d\n", len);
	printf("(x & 03):"); len = printf("%03x", 42); printf("|| len = %d\n", len);
	printf("(x & 010):"); len = printf("%010x", 42); printf("|| len = %d\n", len);

	printf("(X & 0):"); len = printf("%0X", 42); printf("|| len = %d\n", len);
	printf("(X & 01):"); len = printf("%01X", 42); printf("|| len = %d\n", len);
	printf("(X & 02):"); len = printf("%02X", 42); printf("|| len = %d\n", len);
	printf("(X & 03):"); len = printf("%03X", 42); printf("|| len = %d\n", len);
	printf("(X & 010):"); len = printf("%010X", 42); printf("|| len = %d\n", len);
	printf("---- End of all bonus tests '0' of printf ----\n");
	return (0);
}
