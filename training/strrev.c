/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:28:48 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/11 17:36:55 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *st)
{
	int t;

	t = 0;
	while(st[t])
	{
		write(1, &st[t], 1);
		t++;
	}
}

void	ft_strlen(char *s)
{
	int len;

	while(s[len])
		len++;
	return(len);
}

int	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int x;
	int i;

	i = 0;
	x = ft_strlen(str) - 1;
	while(i < x / 2)
	{
	
		x--;
	}
	return (str);
}

int	main(int ac, char *av[])
{
	ft_putstr(ft_strrev(av[1]));
	write(1, "\n", 1);
	return (0);
}
