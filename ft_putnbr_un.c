/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:48:21 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 18:18:46 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_putnbr_un(unsigned int n)
{
	unsigned int	count;
	
	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_un(n / 10);
		n = n % 10;
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
		count++;
	}
	return (count);
}
