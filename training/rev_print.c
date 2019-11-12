/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:17:49 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 10:28:36 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	if(argc != 2)
	ft_putchar('\n');
	else
	{
		int t;

		t = ft_strlen(argv[1]) - 1;
		while(argv[1][t])
		{
			ft_putchar(argv[1][t]);
				t--;
		}
		ft_putchar('\n');
	}
	return (0);
}
