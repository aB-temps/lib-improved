/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:10:04 by abetemps          #+#    #+#             */
/*   Updated: 2025/01/10 18:38:10 by abetemps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/improved_libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*ns;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	ns = malloc(sizeof(char) * len + 1);
	if (!ns)
		return (NULL);
	if (start < s_len)
	{
		while (s[i + start] && i < len)
		{
			ns[i] = s[i + start];
			i++;
		}
	}
	ns[i] = '\0';
	return (ns);
}
