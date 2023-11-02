/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:49 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:25:03 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.c>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", isdigit(argv[1][0]));
	printf("%d\n", ft_isdigit(argv[1][0]));
	return (0);
}
*/
