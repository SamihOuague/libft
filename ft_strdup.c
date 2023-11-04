/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:15:16 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/04 02:25:57 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *s)
{
	char	*str;
	int		len;
	int		i;
	
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		*(str + i) = *(s + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	char	*s;

	s = ft_strdup(argv[1]);
	printf("%s\n", s);
	printf("%p\n%p\n", s, argv[1]);
	return (0);
}
*/
