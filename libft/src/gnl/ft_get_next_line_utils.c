#include "libft.h"

t_fd_buffer	*ft_gnl_find_node(t_fd_buffer *head, int fd)
{
	t_fd_buffer	*current;

	current = head;
	while (current)
	{
		if (current->fd == fd)
			return current;
		current = current->next;
	}
	return (NULL);
}
