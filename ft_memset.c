/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:35:14 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/02 02:37:33 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(s + i) = c;
		i++;
	}
	return (s);
}
