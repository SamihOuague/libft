/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:53:20 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 02:04:02 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str);

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		*(str + i) = (*f)(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
char	rot_one(unsigned int index, char c)
{
	return (c + 3);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_strmapi(argv[1], &rot_one));
	return (0);
}
*/
