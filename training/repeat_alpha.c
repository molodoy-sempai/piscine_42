/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:04:08 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/07 18:39:27 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s1)
{
	int index;
	
	index = 0;
	while(s1[index])
	{
		ft_putchar(s1[index]);
		index++;
	}
}

void	ft_nputchar(char c, int n)
{
	int in;

	in = 0;
	while(in < n)
	{
		ft_putchar(c);
		in++;
	}

}

int	counter(char c)
{
			int t;

			t = 0;
			char s1[] = "abcdefghijklmnopqrstuvwxyz";
			char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			while (t < 26)
			{
				if(c == s1[t] || c == s2[t])
					return (t + 1);
				t++;
			}
	return (1);
}

int	main(int argc, char *argv[])
{
	int ind;

	ind = 0;
	if(argc !=  2)
	{
		ft_putchar('\n');
	}
	else
	{
	while(argv[1][ind])
	{
		ft_nputchar(argv[1][ind], counter(argv[1][ind]));
		ind++;
	}
	ft_putchar('\n');
	}
	return (0);
}
