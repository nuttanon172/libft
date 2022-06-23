/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:10:49 by ntairatt          #+#    #+#             */
/*   Updated: 2022/06/23 17:52:28 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char *p;
	
	*p = *s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}	
}
#include <stdio.h>
int	main()
{
	size_t b= 1;
	char a[100] = "aczx";
	printf("%s\n", ft_bzero(a, b));
}
