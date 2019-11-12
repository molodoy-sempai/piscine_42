/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 04:04:36 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/29 04:15:33 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_nputchar(char y, int n)
{
	int i;

		i = 0;
		while(i < n)
	{
		ft_putchar(y);
		i++;
	}
	return (0);
}

int main()
{
	ft_nputchar('A', 55);
		return (0);
}
