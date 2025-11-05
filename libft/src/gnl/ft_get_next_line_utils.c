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

void	ft_gnl_delete_node(t_fd_buffer **head, int fd)
{
	t_fd_buffer	*temp;
	t_fd_buffer	*current;

	current = *head;
	if (current && (current->fd == fd))
	{
		*head = current->next;
		free(current->buffer);
		free(current);
		return ;
	}
	while (current && (current->next))
	{
		if (current->next->fd == fd)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp->buffer);
			free(temp);
			return ;
		}
		current = current->next;
	}
}
