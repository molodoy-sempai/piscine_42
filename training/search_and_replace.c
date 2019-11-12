/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:02:14 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/11 19:35:48 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int in;

	in = 0;
	while(str[in])
	{
		write(1, &str[in], 1);
			in++;
	}
}

char	*ft_replace(char *s1, char a, char b)
{
		int i;

		i = 0;
	while(s1[i])
	{
		
		if(s1[i] == a)
			s1[i] = b;
		i++;
	}
		return(s1);
}

int	main(int argc, char *argv[])
{
	if(argc != 4)
		write(1, "\n", 1);
	else
	{
		if(argv[2][1] == '\0' && argv[3][1] == '\0')
		{	
			ft_putstr(ft_replace(argv[1], argv[2][0], argv[3][0]));
		}
		write(1, "\n", 1);
	}
				return (0);
}
