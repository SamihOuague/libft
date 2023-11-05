/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:04:12 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 04:54:23 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		(*f)(i, (s + i));
		i++;
	}
}
/*
void	rot_one(unsigned int index, char *c)
{
	*c = (*c) + 3;
}

#include <stdio.h>

int	main()
{
	char	str[] = "ABC";
	
	ft_striteri(str, &rot_one);
	printf("%s\n", str);
	return (0);
}
*/
