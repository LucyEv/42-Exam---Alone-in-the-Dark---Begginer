/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <marvin@42.fr>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:10:41                      #+#    #+#             */
/*   Updated: 2019/02/18 15:26:38                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	l;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			l = argv[1][i];
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				l += 32;
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
				l -= 32;
			write(1, &l, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
