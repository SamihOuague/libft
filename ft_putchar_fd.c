/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:55:36 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 06:25:39 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(int argc, char **argv)
{
	int	file;

	if (argc != 2)
		return (1);
	file = open(argv[1], O_WRONLY);
	ft_putchar_fd(argv[1][0], file);
	return (0);
}
*/
