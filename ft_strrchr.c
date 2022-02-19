#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = ft_strchr(s, '\0');
	while (*str != (char)c)
		if (str-- == s)
			return (NULL);
	return ((char *)str);
}
