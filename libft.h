/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:48:12 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 21:14:55 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

size_t			ft_strlen(const char *s);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_un(unsigned int n);
int				ft_puthexa_l(int n);
int				ft_puthexa_u(int n);
int				ft_putptr(void *);

int				ft_printf(const char *format, ...);

#endif