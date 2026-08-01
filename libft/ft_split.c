/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:40:27 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 13:01:35 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	w_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				count++;
		}
		i++;
	}
	return (count);
}

size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	*copy_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ans;

	ans = malloc((w_count(s, c) + 1) * sizeof(char *));
	if (ans == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			ans[j] = copy_word(&s[i], word_len(&s[i], c));
			if (ans[j] == NULL)
				return (NULL);
			j++;
			i = i + word_len(&s[i], c);
		}
	}
	ans[j] = NULL;
	return (ans);
}
/*
int	main()
{
	int i = 0;
	char **ans = ft_split("Hle  add d", ' ');
	printf("%zu\n", w_count("Hello=", ' '));
	while (i < 4)
	{
		printf("%s\n", ans[i]);
		i++;
	}
}
*/