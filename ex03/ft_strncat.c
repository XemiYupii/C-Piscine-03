/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:00:21 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/03 18:31:00 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	word[20] = "hola, ";
	char	word2[15] = "que tal?";
	
	ft_strncat(word, word2, 11);
	printf("%s", word);
	return (0);
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (n != 0)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (j < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
