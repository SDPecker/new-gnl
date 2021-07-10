#include "get_next_line.h"

int		get_next_line(int fd)
{
	static char	*buf = (char *)malloc(BUFFER_SIZE + 1);
	static int	reader = read(fd, buf, BUFFER_SIZE);
	int			res;

	res = -1;

	print_to_nl(buf);
	if (ft_strchr(buf, '\n') != 0)
	{
		buf = ft_strchr(buf, '\n') + 1;
		res = 1;
	}
	while (reader == BUFFER_SIZE && res < 0)
	{
		reader = read(fd, buf, BUFFER_SIZE);
		print_to_nl(buf);
		if (ft_strchr(buf, '\n') != 0)
		{
			buf = ft_strchr(buf, '\n') + 1;
			res = 1;
		}
	}
	if (reader < BUFFER_SIZE)
		res = 0;
	return (res);
}