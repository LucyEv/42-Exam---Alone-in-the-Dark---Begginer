/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:40:38                      #+#    #+#             */
/*   Updated: 2019/04/05 16:18:40                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *str1, char *str2)
{
	while (*str1)
	{
		while (*str2 && *str2 != *str1)
			str2++;
		if (*str2 != *str1)
			return (0);
		str1++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			while (*argv[1])
				write(1, argv[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
