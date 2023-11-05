/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:10:14 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 01:44:47 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	nbr_len(int n)
{
	unsigned int	len;
	unsigned int	i;

	i = n;
	len = 0;
	if (n < 0)
	{
		i = -1 * n;
		len++;
	}
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	c;
	unsigned int	i;
	char			*str;
	int				len;

	len = nbr_len(n);
	str = malloc((sizeof(char) * len) + 1);
	i = 0;
	if (n < 0)
	{
		c = -1 * n;
		*(str + i) = '-';
		i++;
	}
	else
		c = n;
	if (n >= 0)
		len--;
	while (c > 0)
	{
		*(str + (len - i++)) = (c % 10) + '0';
		c = c / 10;
	}
	*(str + i) = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", ft_itoa(atoi(argv[1])));
	return (0);
}
