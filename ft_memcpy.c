#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i = 0;
    const unsigned char *srcs = src;
    unsigned char *dsts = dst;
    while (i < n)
    {
        dsts[i] = srcs[i];
        i++;
    }
    return (dst);
}

int main(void)
{
	char str1[20] = "HELLO WORLD";
	char str2[20] = "HELLO WORLD";

	ft_memcpy(str1 + 2, str1, 5);
	memcpy(str2 + 2, str2, 5);

	printf("ft_memcpy: %s\n", str1); // Expected: HEHELLOWORLD
	printf("memcpy: %s\n", str2); // Expected: HEHELLOWORLD

	return (0);
}