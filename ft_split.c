/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:44:03 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 01:09:55 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char *s, unsigned int start, int len);

static int	next_sep(char *s, char c)
{
	int	i;

	i = 1;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (i);
		i++;
	}
	return (i);
}

static char	*skip_first_chars(char *s, char c)
{
	int	i;

	i = 0;
	while (*(s + i) == c)
		i++;
	return (s + i);
}

static int	count_words(char *s, char c)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	b = 0;
	count = 0;
	while (*(s + i + 1) != '\0')
	{
		if (*(s + i) == c && *(s + i + 1) != c && b)
			count++;
		if (!b && *(s + i) != c)
			b = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		b;

	s = skip_first_chars(s, c);
	if (*(s) == '\0')
		return ('\0');
	count = count_words(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	i = 0;
	while (*(s) != '\0')
	{
		b = next_sep(s, c);
		tab[i] = ft_substr(s, 0, b);
		s = skip_first_chars((s + b), c);
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	if (argc != 3)
		return (1);
	i = 0;
	tab = ft_split(argv[1], argv[2][0]);
	while (i < 3)
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	
	free(tab);
	return (0);
}
*/
