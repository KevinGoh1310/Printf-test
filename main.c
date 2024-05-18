/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegoh <kegoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:28:32 by kegoh             #+#    #+#             */
/*   Updated: 2024/05/17 21:16:49 by kegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	c;
	char	a;
	char	*text;

	c = 'c';
	a = 'a';
	text = "string literal";
	ft_printf("This text %% is %p, %c, %c, %d, %x, %X", text, 'b', 'c', 3, 200, 222);
	printf("\nThis text %% is %p, %c, %c, %d, %x, %X\n", text, 'b', 'c', 3, 200, 222);
}