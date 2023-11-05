/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:37:53 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:25:38 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", isalpha(argv[1][0]));
	printf("%d\n", ft_isalpha(argv[1][0]));
	return (0);
}
*/
