#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	current;

	if (n == 0)
		return (0);
	current = 0;
	while (s1[current] == s2[current] && s1[current] != '\0')
	{
		if (current < (n - 1))
			current++;
		else
			return (0);
	}
	return ((unsigned char)(s1[current]) - (unsigned char)(s2[current])); 
}
