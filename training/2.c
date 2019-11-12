/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 02:28:08 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/29 04:02:17 by nnasyrla         ###   ########.fr       */
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
	int		u;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*ptr5;
	int		**ptr6;
	int		***ptr7;

	a = 3;
	u = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &u;
	ptr6 = &ptr5;
	ptr7 = &ptr6;

//	ft_putnbr(********ptr7);
	ft_putnbr(a);
	ft_putnbr(*ptr5);
	***ptr7 = 9;
	ft_putnbr(a);
	ft_putnbr(u);

	ft_putaddr(&a);
	ft_putaddr(&(ptr5));
	ft_putaddr(&u);
	return (0);
}
