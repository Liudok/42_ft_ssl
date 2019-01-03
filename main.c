
#include "include/md5.h"


void ft_bzero_flags(struct s_flags *flags);

int ft_md5(int ac, char **av)
{
	printf("MD5: %s\n", av[ac - 1]);
	return (0);
}
char * concatinate(int fd)
{
	int i;
	char* ret;

	i = 1;
	while (get_next_line(fd, &ret) > -1)
	{
		printf("ret = %s\n", ret);		
	}


	// while (++i < ac)
	// {
	// 	printf("av[%i] = %s\n", i, av[i]);
	// 	ret = ft_strcat(ret, av[i]);
	// }
	return ret;
}

int main(int ac, char **av)
{
	struct s_flags flags;
	char *str = NULL;

	ft_bzero_flags(&flags);
	init_error_messages();
	if (ac == 1)
		print_usage(-1, NULL);
	else
	{
		parse_commands(av[1],&flags);
		print_error(parse_flags(ac, av, &flags));
		print_error(check_flags_sum(&flags));
	}
	str = concatinate(1);
	printf("STR = %s\n", str);
	//print_output(&flags);
	return (0);
}

void print_error(enum errors e)
{
	int er = e + 5;
	if (er < 5)
	{
		ft_putstr("[31mft_ssl: Error: \'");
		ft_putstr(g_errors[er]);
		ft_putstr("\n[0m");
		// ft_putendl("[32musage: ft_ssl command [command opts] [command args][0m");
		// ft_putstr("\'' is an invalid command.\n\nStandard commands:\n\n");
		// ft_putstr("Message Digest commands:\nmd5\nsha256\n\nCipher commands:\n");
exit(-1);
		// if (parse_flags(ac, av, &flags) < 0)
		// {
		// 	ft_putchar('\'');
		// 	ft_putstr(av[ac - 1]);
		// 	ft_putstr("\' is an invalid command.\n\nNo such file or directory\n");
		// }
		// else
		// {
		// 	ft_putstr("ft_ssl: Error: \'");
		// 	ft_putstr(av[ac - 1]);
		// 	ft_putstr("\'' is an invalid command.\n\nStandard commands:\n\n");
		// 	ft_putstr("Message Digest commands:\nmd5\nsha256\n\nCipher commands:\n");

		// }
	}
}

void print_usage(enum errors e, char *command)
{
	int er = e + 5;

	if (er < 5)
	{
		if (command)
		{
			ft_putstr("[31mft_ssl: Error: \'");
			ft_putstr(command);
			ft_putstr("\' is an invalid command.[0m\n\nStandard commands:\n\n");
			ft_putstr("Message Digest commands:\nmd5\nsha256\n\nCipher commands:\n");
		}
		else
			ft_putendl("[32musage: ft_ssl command [command opts] [command args][0m");
	}
	exit(-1);
}