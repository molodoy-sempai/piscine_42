/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:44:00 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/07 19:54:28 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int t;

	t = 0;
	while(s[t])
	{
		write(1, &s[t], 1);
		t++;
	}
}

char ft_replace(char c)
{
	int i;
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	while (i < 26)
	{
		if(c == s1[i])
			c = s2[i];
		else if(c == s2[i])
			c = s1[i];
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
	int q;

	q = 0;
	while(argv[1][q])
	{
		ft_putchar(ft_replace(argv[1][q]));
			q++;
	}
		write(1, "\n", 1);
	}
	return(0);
}
