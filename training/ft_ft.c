/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 23:08:50 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/10/31 23:14:58 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	int i;

	i = 42;
	nbr = &i;
}

int main()
{
	printf("%s", ft_ft(int *nbr));
		return 0;
}
