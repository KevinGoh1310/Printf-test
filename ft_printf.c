/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:29:21 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 21:08:54 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

int	if_specifier(char c, va_list args)
{
	// if (c == '%')
	// {
	// 	write(1, "%%", 1);
	// 	return (1);
	// }
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (c == 'd' || c =='i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_un(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthexa_l(va_arg(args, int)));
	if (c == 'X')
		return (ft_puthexa_u(va_arg(args, int)));
	else
		return (0);
}

int	w_str(const char *format, va_list args, int count)
{
	int	i;
	
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%%", 1);
			count += 2;
			i += 2;
		}
		if (format[i] == '%')
        {
			count = count + if_specifier(format[i + 1], args);
			i++;
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	
	count = 0;
	va_start(args, format);
	count = w_str(format, args, count);
	va_end(args);
	return (count);
}


