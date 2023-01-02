#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *ftype;
	char *file;

	ftype = ".ber";
	file = "filetest.ber";

	// if (ft_strnstr(path, tofind, ft_strlen(path)) == tofind)
	// 	printf("file name is correct");
	// else
	// 	printf("file name is not correct");


	if (*ft_strnstr(file, ftype, ft_strlen(file)) == *ftype)
	{
		printf("%s", ft_strnstr(file, ftype, ft_strlen(file)));
		printf("%c", '\n');
		printf("%s", ftype);
	}

}
