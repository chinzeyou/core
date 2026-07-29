/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:51:49 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 13:51:57 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
    const unsigned char *s = src;
    unsigned char *d = dst;
    if (!dst && !src)
        return (NULL);

    if (d < s)
    {
        *d = *s;
        d++;
        s++;
    }
    else if (d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dst);
}

int main(void)
{
	char str1[20] = "HELLO WORLD";
	char str2[20] = "HELLO WORLD";

	ft_memmove(str1 + 2, str1, 5);
	memmove(str2 + 2, str2, 5);

	printf("ft_memmove: %s\n", str1); // Expected: HEHELLOWORLD
	printf("memcpy: %s\n", str2); // Expected: HEHELLOWORLD

	return (0);
}