/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <marvin@42.fr>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 10:58:20                      #+#    #+#             */
/*   Updated: 2019/04/22 11:47:32                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_delimit(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (ft_delimit(*argv[1]))
			argv[1]--;
		while (*argv[1] && !ft_delimit(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*argv[1] && !ft_delimit(*argv[1]))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
