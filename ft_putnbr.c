/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:48:21 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 18:18:46 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	count;
	
	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		count += 1;
		ft_putnbr(-n);
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
		count++;
	}
	return (count);
}