/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:          <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 23:11:13 by                   #+#    #+#             */
/*   Updated: 2019/04/11 23:14:03 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}