/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:27:42 by azourgan          #+#    #+#             */
/*   Updated: 2022/11/15 15:27:43 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *size)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", size);
	else if (nbr < 0)
	{
		ft_putchar('-', size);
		ft_putnbr(-nbr, size);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, size);
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, size);
		ft_putnbr(nbr % 10, size);
	}
}
