/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:27:39 by azourgan          #+#    #+#             */
/*   Updated: 2022/11/15 15:27:40 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *size)
{
	if (nbr < 10)
		ft_putchar(nbr + 48, size);
	else
	{
		ft_putnbr_u(nbr / 10, size);
		ft_putnbr_u(nbr % 10, size);
	}
}
