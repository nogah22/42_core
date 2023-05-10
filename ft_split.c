/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:32:57 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 13:18:51 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates and returns an array of strings obtain by splitting 's'
// using the character 'c' as delimiter. The array must be ended by a NULL
// pointer.

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (s == NULL || c == '\0')
		return (NULL);
	result = (char **)ft_calloc(ft_countword(s, c) + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			result[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (result[i] == NULL)
				return (NULL);
			i++;
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

// test ft_split function that splits a string using the character c as a 
// delimiter and returns an array of strings.

int main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello World Goodbye Hell HELLO HEAVEN", ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}