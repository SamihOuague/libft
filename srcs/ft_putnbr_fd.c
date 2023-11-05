/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:25:29 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 06:10:40 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(int c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	unsigned int	mod;	

	nb = n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	mod = nb % 10;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(mod + '0', fd);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_putnbr_fd(atoi(argv[1]), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
