/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:48:21 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 18:32:24 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_hexa(char *hexa_str, unsigned long long n, int count)
{
	unsigned long long	hexa;

	hexa = 16;
	if (n >= hexa)
	{
		count = w_hexa(hexa_str, n / 16, count);
		write (1, &hexa_str[n % 16], 1);
		count++;
	}
	if (n < hexa)
	{
		write (1, &hexa_str[n], 1);
		count++;
	}
	return (count);
}

int	ft_puthexa_u(int n)
{
	int	count;

	count = 0;
	count = w_hexa("0123456789ABCDEF", n, count);
	return (count);
}