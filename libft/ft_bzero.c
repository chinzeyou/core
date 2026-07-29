#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    int i = 0;
    unsigned char *str = s;
    while (str[i] != '\0' && i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
int main()
{
    char str[] = "Hello";
    bzero(str, (0));
    printf("%s", str);
    ft_bzero(str, 0);
    printf("%s", str);
}
    */