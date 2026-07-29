#include <libft.h>

void *ft_memset(void *str, int c, size_t len)
{
    unsigned char *p = str;
    int i = 0;
    while (p[i] != '\0' && i < len)
    {
        p[i] = c;
        i++;
    }
    return str;
}
int main ()
{
    char str[] = "Hello";   
    memset(str, 'A', 6);
    printf("%s\n", str);
    ft_memset(str, 'C', 9);
    printf("%s\n", str);
}