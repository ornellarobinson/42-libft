/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:34:44 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/30 10:37:13 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		nb;
	char	*str;

	i = 0;
	nb = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (nb + 1));
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}