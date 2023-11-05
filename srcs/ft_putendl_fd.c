/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:19:19 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 06:58:31 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_putendl_fd(argv[1], 1);
	return (0);
}
*/
