#include "libft.h"

static char	*ft_extract_line(char *buf);
static char	*ft_read_content(int fd, char *buf);

char	*ft_get_next_line(int fd)
{
	static	t_fd_buffer	*head = NULL;
	t_fd_buffer	*node;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	node = ft_gnl_find_node(head, fd);
	if (!node)
	{
		node = (t_fd_buffer *)malloc(sizeof(t_fd_buffer));
		if (!node)
			return (NULL);
		node->fd = fd;
		node->buffer = ft_strdup("");
		node->next = head;
		head = node;
	}
	node->buffer = ft_read_content(fd, node->buffer);
	if (!node->buffer || !*(node->buffer))
	{
		ft_gnl_delete_node(&head, fd);
		return (NULL);
	}
	line = ft_extract_line(node->buffer);
	node->buffer = ft_substr(node->buffer, ft_strlen(line),
	 (ft_strlen(node->buffer) - ft_strlen(line)));
	if (!*(node->buffer))
		ft_gnl_delete_node(&head, fd);
	return (line);
}

static char	*ft_read_content(int fd, char *buf)
{
	ssize_t	bytes_read;
	char	*read_chunk;
	char	*temp_buf;

	read_chunk = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!read_chunk)
		return (NULL);
	bytes_read = 1;
	while ((bytes_read > 0) && !ft_strchr(buf, '\n'))
	{
		bytes_read = read(fd, read_chunk, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(read_chunk);
			free(buf);
			return (NULL);
		}
		read_chunk[bytes_read] = '\0';
		temp_buf = ft_strjoin(buf, read_chunk);
		free(buf);
		buf = temp_buf;
	}
	free(read_chunk);
	return(buf);
}

static char	*ft_extract_line(char *buf)
{
	size_t	len;

	if (!buf || !*buf)
		return (NULL);
	len = 0;
	while (buf[len] && buf[len] != '\n')
		len++;
	if (buf[len] == '\n')
		len++;
	return (ft_substr(buf, 0, len));
}
