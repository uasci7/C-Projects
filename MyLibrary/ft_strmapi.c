/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:18 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 14:18:22 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*array;

	i = 0;
	if (s == NULL)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	f(unsigned int a, char b)
{
	return (b + a);
}

int	main(void)
{
	char	s[] = "ufukasc";

	printf("%s", ft_strmapi(s, f));
}
