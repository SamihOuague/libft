/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:24:33 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:33:45 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", isprint(argv[1][0]));
	printf("%d\n", ft_isprint(argv[1][0]));
	return (0);
}
*/
