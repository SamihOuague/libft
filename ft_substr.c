/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:27:49 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/04 03:00:15 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*str;
	int		i;

	i = 0;
	if (start >= len)
		return ('\0');
	str = malloc((len - start) * sizeof(char) + 1);
	while (i < (len - start) && *(s + i) != '\0')
	{
		*(str + i) = *(s + (start + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("%p\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));

	return (0);
}
*/
