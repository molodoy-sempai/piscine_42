/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:10:17 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 16:37:13 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_replace_a_b(char *d, char a, char b)
{
	int i;

	i = 0;
	while (d[i])
	{
		if (d[i] == a)
		   ft_putchar(b);
		else
			ft_putchar(d[i]);
				i++;
	}
}


int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		ft_replace_a_b(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
