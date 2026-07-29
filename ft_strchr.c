/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:10:40 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 13:18:41 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
    unsigned char *str = s;
    while (*str != '\0')
    {
        if (c = *str)
        {
            return (str);
        }
        str++;
    }
    return (str);
}

#include <string.h>
#include <stdio.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "Hello";

    printf("%s\n", strchr(s1, 123));
}