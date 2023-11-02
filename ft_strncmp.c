/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:07:11 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 06:17:18 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && i < (n - 1) && *(s1 + i) != '\0')
		i++;
	return ((int)(*(s1 + i) - *(s2 + i)));
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d\n%d\n", strncmp(argv[1], argv[2], 3),
       	ft_strncmp(argv[1], argv[2], 3));
	return (0);
}
*/
