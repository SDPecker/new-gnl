#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	*buf = (char *)malloc(BUFFER_SIZE + 1);
	static int	reader = read(fd, buf, BUFFER_SIZE);

	line = join(&line, buf);
	if (ft_strchr(buf, '\n') != 0)
	{
		buf = ft_strchr(buf, '\n') + 1;
		return (1);
	}
	while (reader == BUFFER_SIZE)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		line = join(&line, buf);
		if (ft_strchr(buf, '\n') != 0)
		{
			buf = ft_strchr(buf, '\n') + 1;
			return (1);
		}
	}
	return (0);
}