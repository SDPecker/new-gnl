#include "get_next_line.h"

int		get_next_line(int fd)
{
	static char	*buf = 0;
	static int	reader = -2;

	if (reader == -2)
	{
		buf = (char *)malloc(BUFFER_SIZE + 1);
		reader = read(fd, buf, BUFFER_SIZE);
		write(1, buf, ft_strlen(buf));
	}
	if (reader < BUFFER_SIZE)
		return (0);
	while (reader == BUFFER_SIZE)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		write(1, buf, ft_strlen(buf));
		if (ft_strchr(buf, '\n') != 0)
		{
			buf = ft_strchr(buf, '\n') + 1;
			write(1, "\n", 1);
			return (1);
		}
	}
	if (reader < BUFFER_SIZE)
		return (0);
}