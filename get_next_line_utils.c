#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, char c)
{
	char	*r;

	r = (char *)s;
	if (!c)
		return (&r[ft_strlen(r)]);
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}

void	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = ft_strlen(dst);
	j = 0;
	r = ft_strlen(src);
	if (size < i)
	{
		r += size;
		return (r);
	}
	else
		r += i;
	while (i + 1 < size && src[j])
		dst[i++] = src[j++];
	dst[i] = 0;
	return (r);
}