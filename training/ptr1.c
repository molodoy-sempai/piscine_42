/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 02:54:00 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/29 03:59:16 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//int	fn(int i)
//{
//	if (i <= 5)
//	{
//		write(1,"D", 1);
//		i++;
//	}
//	return (0);
//}

ft_nputchar(char c, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		ft_putchar(c);
		i++;
	}
	return(0);
}

ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}

int main ()
{
	ft_nputchar('A', 12);
	return (0);
}
