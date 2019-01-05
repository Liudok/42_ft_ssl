#ifndef MD5_H
#define MD5_H

#include "stdio.h"

#include "../libft/libft.h"

# define BUF 10000

enum errors
{
	ERROR = -5,
	STANDARD_COMMANDS = -4,
	BAD_FLAG = -3,
	NO_SUCH_FILE = -2,
	INVALID_COMAND = -1,
	OK = 0
};

char * g_errors[6];


struct s_flags
{
	char p;
	char q;
	char r;
	char s;
	char md5;
	char sha256;
};

void ft_bzero_flags(struct s_flags *flags);
void print_error(enum errors e);
void init_error_messages(void);
int parse_commands(char *arg, struct s_flags *flags);
int parse_flags(int ac, char **av, struct s_flags *flags);
int check_flags_sum(struct s_flags *flags);
void print_usage(enum errors e, char *command);
#endif