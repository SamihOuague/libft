/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 03:01:03 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/04 04:41:17 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len_1;
	int		len_2;
	int		i;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	if ((len_1 + len_2) == 0)
		return ('\0');
	str = malloc(sizeof(char) * (len_1 + len_2) + 1);
	i = 0;
	while (i < (len_1 + len_2))
	{
		if (i < len_1)
			*(str + i) = *(s1 + i);
		else
			*(str + i) = *(s2 + (i - len_1));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);

	printf("%s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}
*/
