/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:38:16 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:39:46 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(s + i) = '\0';
		i++;
	}
}
