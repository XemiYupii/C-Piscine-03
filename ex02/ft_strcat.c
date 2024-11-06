/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:50:44 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/03 17:59:41 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	word[20] = {"hola "};
	char	word2[9] = {"que tal?"};

	ft_strcat(word, word2);
	printf("%s ", word);
	return (0);
}
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
