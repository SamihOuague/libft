/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:13:37 by  souaguen         #+#    #+#             */
/*   Updated: 2023/11/05 07:28:12 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/******** Part (1) *********/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char *str);
int		ft_strlen(char *s);
int		ft_strlcpy(char *dest, char *src, int size);
int		ft_strlcat(char *dest, char *src, int size);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_memcmp(void *s1, void *s2, int n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *big, char *little, int len);
void	ft_memchr(void *s, int c, int n);
void	ft_memset(void *s, int c, int n);
void	ft_bzero(void *s, int n);
void	ft_memcpy(void *dest, void *src, int n);
void	ft_memmove(void *dest, void *src, int n);
/******** Part (2) *********/
char	*ft_substr(char *s, unsigned int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s1, char *set);
char	**ft_split(char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
