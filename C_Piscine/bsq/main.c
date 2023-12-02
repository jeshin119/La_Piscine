/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-kang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:01:38 by ji-kang           #+#    #+#             */
/*   Updated: 2023/09/13 00:09:36 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	square(char **arr);
char	**ft_split(char *str, char *charset);
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 1024
#define ERR_MSG "map error\n"
void	is_err(int fd)
{
	write(2,ERR_MSG,10);
	close(fd);
}

int	f_open(const char* fp_src)
{
	int	fd;

	fd = open(fp_src, O_RDONLY);
	if (fd < 0)
	{
		is_err(fd);
		return (0);
	}
	return (fd);
}

ssize_t get_size(int fd)
{
	int		rd_count;
	char	buf[BUF_SIZE];
	ssize_t	temp_size;
	ssize_t	rd_size;
	rd_size = 0;
	temp_size = 0;
	while((temp_size = read(fd,buf,BUF_SIZE)) > 0)
	{
		rd_size += temp_size;
		rd_count++;
	}
	if(!rd_count)
	{
		is_err(fd);
		return (0);
	}
	return (rd_size + 1);
}
char	** get_map(int fd, ssize_t rd_size, const char *fp_src)
{
	char	**map;
	char	*buf;

	fd = open(fp_src,O_RDONLY);
	buf = (char*)malloc(rd_size);
	read(fd,buf,rd_size );
	buf[rd_size - 1] = 0;

	map = ft_split(buf,"\n");
	return (map);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	fd;
	char **map;
	ssize_t size;
	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		fd = open(argv[i],O_RDONLY);
		size = get_size(fd);
		close(fd);
		map = get_map(fd,size,argv[i]);
		
		if (!map)
			return (0);
		while (*map)
		{
			printf("%s\n",*map);
			map++;
		}
		i++;
		close(fd);
	}
}
