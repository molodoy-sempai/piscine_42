/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:10:18 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 16:09:02 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char ft_replace(char c)
{
	int i;
	char s1[] = "abcdefghijklmABCDEFGHIJKLM";
	char s2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	i = 0;

	while(i < 26)
	{
		if(c == s1[i])
			return(s2[i]);
		else if (c == s2[i])
			return(s1[i]);
		i++;
	}
	return (c);
}

int	main(int argc, char *argv[])
{
	if(argc != 2)
		ft_putchar('\n');
	else
	{
		int s;

		s = 0;
		while(argv[1][s])
		{
		ft_putchar(ft_replace(argv[1][s]));
			s++;
		}
		ft_putchar('\n');
	}
	return (0);
}
