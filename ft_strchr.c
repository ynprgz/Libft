/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 05:47:12 by yaperalt          #+#    #+#             */
/*   Updated: 2024/09/16 23:51:44 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  strchr()  function  returns a pointer to the first occurrence of
	the character c in the string str.
*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	*str_p;

	i = 0;
	str_p = (unsigned char *)str;
	while (str_p[i] != '\0')
	{
		if (str_p[i] == (unsigned char)c)
			return ((char *)&str_p[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&str_p[i]);
	}
	return (0);
}
