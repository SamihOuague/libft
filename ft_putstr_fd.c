/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:14:47 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 06:24:57 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		ft_putchar_fd(*(s + i), fd);
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putstr_fd(argv[1], 1);
	ft_putstr_fd("\n", 1);
	return (0);
}
*/
