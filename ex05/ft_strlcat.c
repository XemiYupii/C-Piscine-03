/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 02:32:18 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/05 09:12:13 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	result;
	char	word[20] = "Hola ";
	char	word2[] = "mundo";
	
	result = ft_strlcat(word, word2, 20);
	printf("%d", result);
	return (0);
}
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	j = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (size <= dest_length)
		return (size + src_length);
	i = dest_length;
	while (i < (size - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_length + src_length);
}
