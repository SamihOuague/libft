/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:44:32 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/04 02:14:50 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int nmemb, int size)
{
	void	**buf;
	int		i;

	buf = NULL;
	buf = malloc(nmemb * sizeof(void *));
	i = 0;
	while (i < nmemb)
	{
		*(buf + i) = malloc(size);
		i++;
	}
	return (buf);
}
/*
#include <stdio.h>

int	main()
{

	int	**tab;
	int	i;
	int	j;

	tab = ft_calloc(4, 2 * sizeof(int));
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 2)
		{
			tab[i][j] = j + i;
			j++;	
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 2)
		{
			printf("%d\n", tab[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
*/
