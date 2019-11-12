/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:29:47 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 11:49:48 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_replace(char c)
{
	int i;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "bcdefghijklmnopqrstuvwxyzaBCDEFGHIJKLMNOPQRSTUVWXYZA";

	i = 0;

	while(s1[i])
	{
		if(c == s1[i])
			return s2[i];
		++i;
	}
	return(c);
}

int	main(int argc, char *argv[])
{
	if(argc != 2)
		ft_putchar('\n');
	else
	{
		int p;

		p = 0;
		while(argv[1][p])
		{
ft_putchar(ft_replace(argv[1][p]));
				p++;
		}
	ft_putchar('\n');
	}
	return (0);
}
