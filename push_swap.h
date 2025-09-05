#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#  include <limits.h>
#  include <stdarg.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <unistd.h>
#  include <sys/time.h>

typedef	struct s_sa
{
	void		*content;
	struct s_sa	*next;
}	t_sa;

typedef	struct s_sb
{
	void		*content;
	struct s_sb	*next;
}	t_sb;

#endif