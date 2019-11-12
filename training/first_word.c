/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:00:08 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/07 22:04:52 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	main(int argc, char *argv[])
{
	if(argc != 2)
		ft_putchar('\n');
	else 
	{
		int i;

		i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
			i++;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\0')
			ft_putchar(argv[1][i++]);
			ft_putchar('\n');
	}
	return (0);
}
