

#include "include/md5.h"

int parser(int ac, char **av)
{
	if (ac == 1)
		ft_putendl("usage: ft_ssl command [command opts] [command args]");
	else
	{
		if (!ft_strcmp(av[2], "-p"))
			printf("%s\n", av[ac - 1]);
		else if (!ft_strcmp(av[2], "-q"))
			printf("%s\n", av[ac - 1]);
		else
			ft_putstr("\nno flags\n");
	}
	return (0);
}


int parse_single_flag(char c, struct s_flags *flags)
{
	if (c == 'p')
		flags->p = '1';
	else if (c == 'q')
		flags->q = '1';
	else if (c == 'r')
		flags->r = '1';
	else if (c == 's')
		flags->s = '1';
	else
		return (-3);
	return (0);
}

int parse_long_argument(char *arg, struct s_flags *flags)
{
	size_t j;
	int error_code;

	error_code = 0;
	j = 1;
	while (j < ft_strlen(arg))
	{
		if ((error_code = parse_single_flag(arg[j], flags)) < 0) 
			return error_code;
		j++;
	}

	return (0);
}
int parse_commands(char *arg, struct s_flags *flags)
{
	if (!ft_strcmp(arg, "md5") && flags->sha256 == '0')
		flags->md5 = '1';
	else if (!ft_strcmp(arg, "sha256") && flags->md5 == '0')
		flags->sha256 = '1';
	else
		print_usage(-1, arg);
	return (0);
}

enum errors parse_flags(int ac, char **av, struct s_flags *flags)
{
	int i;
	int error_code = 0;	
//	printf("do: p = %c\tq = %c\tr = %c\ts = %c\n", flags->p, flags->q, flags->r, flags->s);
	i = 1;
	while (++i < ac)
	{
		if (ft_strlen(av[i]) == 1)
			error_code = -1;
		else if (ft_strlen(av[i]) == 2 && av[i][0] == '-')
			error_code = parse_single_flag(av[i][1], flags);
		else if (ft_strlen(av[i]) > 2)
			error_code = parse_long_argument(av[i], flags);
		if (error_code < 0)
			return (error_code);
	}

	printf("posle: p = %c\tq = %c\tr = %c\ts = %c\n", flags->p, flags->q, flags->r, flags->s);
	
//printf("parsed - md5  = %i, sha256 = %i\n", flags->md5, flags->sha256);
	

return (0);
}