/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 05:09:33 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/29 13:34:37 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 0;
	fact = 0;
	while (i <= nb)
	{
		fact = fact*i;
		i++;
	}
	return (fact);
}

int	main()
{
	ft_iterative_factorial(5);
	return (0);
}
