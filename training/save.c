/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 02:28:08 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/28 23:18:52 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char	ptr)
{
		write(1, &ptr, 1);
}

void	ft_putnbr(int ptr)
{
		printf("%d\n", ptr);
}

void	ft_putaddr(void	*ptr)
{
		printf("%p\n", &ptr);
}

int main(void)
{
	int		a;
	int		*ptr;

	a = 5;
	ptr = &a;
	ft_putnbr(*ptr);
	ft_putaddr(ptr);
	return (0);
}
