/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:22:14 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 16:12:56 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *s)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while(*s == ' ' || *s == '\n' || *s == '\t' || *s == '\v' || *s == '\r' || *s == '\f')
		s++;
	if(*s == '+')
		s++;
	else if(*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s <= '9' && *s >= '0')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	printf("%d", (ft_atoi(argv[1])));
}
