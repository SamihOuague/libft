/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 05:22:10 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 05:45:31 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, const char *src, int size)
{
	int	d_len;
	int	i;

	d_len = 0;
	while (*(dest + d_len) != '\0')
		d_len++;
	i = d_len;
	while (i < (size - 1))
	{
		*(dest + i) = *(src + (i - d_len));
		i++;
	}
	*(dest + i) = '\0';
	i = 0;
	while (*(src + i) != '\0')
		i++;
	if (d_len < size)
		return (i + d_len);
	return (i + size);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	char	dest[1] = "";
	char	dest2[1] = "";

	printf("%d\n", (int) strlcat(dest, argv[1], 0));
	printf("%s\n", dest);
	printf("%d\n", (int) ft_strlcat(dest2, argv[1], 0));
	printf("%s\n", dest2);
	return (0);
}
*/
