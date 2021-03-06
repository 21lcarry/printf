/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_while.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 18:00:20 by lcarry            #+#    #+#             */
/*   Updated: 2021/01/27 18:00:22 by lcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_write_while(int i, char c)
{
	int	j;

	j = 0;
	while (j < i)
	{
		write(1, &c, 1);
		++j;
	}
	return (j);
}
