/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:19:15 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/03 17:51:36 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int	equals;
	char	word[] = {"a"};
	char	word2[] = {"adios"};

	equals = ft_strncmp(word, word2, 4);
	printf("%d ", equals);
	printf("%d", strncmp(word, word2, 0));
	return (0);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			if (s1[i] == '\0')
				return (0);
			i ++;
		}
	}
	return (0);
}
