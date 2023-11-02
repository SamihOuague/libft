/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 03:13:26 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 05:46:35 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, int n)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < n)
	{
		tmp = *(char *)(src + i);
		*(char *)(dest + i) = tmp;
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	str[] = "Start stop";
	int	i = 0;
	
	printf("%s\n", str);
	ft_memmove(str, (str + 2), 3);
	printf("%s\n", str);
	return (0);
}
*/
