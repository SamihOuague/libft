/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 05:51:54 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 05:57:45 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((int) *(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "0123456789abcdef";
	
	printf("%s\n", ft_strchr(str, (int) 'e'));
	printf("%s\n", ft_strchr(str, (int) 'e'));
	return (0);
}
*/
