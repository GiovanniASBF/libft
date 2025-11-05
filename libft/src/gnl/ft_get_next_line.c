#include "libft.h"

char	*ft_get_next_line(int fd)
{
	static	t_fd_buffer	*head = NULL;
	t_fd_buffer	*node;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
}
