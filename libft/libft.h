#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

//delete
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str);
void ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif