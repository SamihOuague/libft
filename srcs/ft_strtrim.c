/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:12:39 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/04 04:41:57 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, int n);
int	ft_strlen(char *str);

char	*ft_strtrim(char *s1, char *set)
{
	char	*str;
	char	*tmp;
	int		l_set;
	int		l_s1;
	int		i;

	l_set = ft_strlen(set);
	l_s1 = ft_strlen(s1);
	tmp = s1;
	i = 0;
	if (ft_strncmp(s1, set, l_set) == 0)
	{
		tmp = (s1 + l_set);
		l_s1 -= l_set;
	}
	if (ft_strncmp((tmp + (l_s1 - l_set)), set, l_set) == 0)
		l_s1 -= l_set;
	str = malloc(sizeof(char) * l_s1 + 1);
	while (i < l_s1)
	{
		*(str + i) = *(tmp + i);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}
*/
