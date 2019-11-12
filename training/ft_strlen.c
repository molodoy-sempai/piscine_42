/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:47:16 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/01 15:57:41 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		str++;
		len++;
	}
	return(len);
}


int main()
{
	char	str[] = "Hello";
	printf("%d", ft_strlen(str));
	printf("%lu", strlen(str));
	return (0);
}
