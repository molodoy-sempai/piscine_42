/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:27:21 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/04 22:43:19 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = nb * -1;
	}
	else
		i = nb;
		if (i >= 10)
			ft_putnbr(i / 10);
		ft_putchar(i % 10 + 48);
}

int main()
{
	int a;
	a = 5;
	int *ptr;
	ptr = &a;
	ft_putnbr(a);
	ft_putchar('\n');
	return (0);
}
