/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:31:42 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/05 09:17:14 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	word[] = "Hola mundo";
	char	word2[] = "mundo";
	char	word3[] = "Hola";
	char	word4[] = "";
	char	word5[] = "mu";
	char	word6[] = "papallona";

	printf("%s\n", ft_strstr(word, word2));
	printf("%s\n", ft_strstr(word, word3));
	printf("%s\n", ft_strstr(word, word4));
	printf("%s\n", ft_strstr(word, word5));
	printf("%s\n", ft_strstr(word, word6));
	//printf("%s\n", strstr("Hola mundo", "papa"));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
