/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:13:51 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:23:22 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", isascii(argv[1][0]));
	printf("%d\n", ft_isascii(argv[1][0]));
	return (0);
}
*/
