/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:40:02 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 05:46:49 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "Start stop";

	ft_memcpy(&src[0], &src[2], 3);
	printf("%s\n", src);
	return (0);
}
*/
