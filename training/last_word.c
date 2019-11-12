/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:05:56 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/07 23:37:34 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	(write(1, &c, 1));
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
	return(len - 1);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
		ft_putchar('\n');
	else
	{
		int i;

		i = ft_strlen(argv[1]);
		while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
			i--;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\0')
			i--;
		i++;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
			ft_putchar(argv[1][i++]);
	}
	return (0);
}
