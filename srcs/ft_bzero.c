/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:38:16 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 06:22:45 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	tab[5] = "abcd";

	printf("%s\n", tab);
	ft_bzero(tab, 5);
	printf("%s\n", tab);
	return (0);
}
*/
