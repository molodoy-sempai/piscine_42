/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasyrla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:28:31 by nnasyrla          #+#    #+#             */
/*   Updated: 2019/11/08 14:33:03 by nnasyrla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *new;
	int i;

	new = malloc(sizeof(*src));
	if(new == 0)
		return (0);
	else
	{
		i = 0;
		while(src[i])
		{
			new[i] = src[i];
				i++;
		}
		new[i] = '\0';
	}
			return(new);
}

