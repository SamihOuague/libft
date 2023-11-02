/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:02:12 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 06:17:32 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = '\0';
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char) c)
			tmp = (s + i);
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "hello world";

	printf("%p\n", ft_strrchr(str, (int) '\n'));
	printf("%p\n", strrchr(str, (int) '\n'));
	return (0);
}
*/
