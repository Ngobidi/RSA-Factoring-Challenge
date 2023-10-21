#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * study_textfile- study and forward to stdout a num of characters.
 *
 *@filename: f_name
 *@letters: letters_num
 * Return: chars.
 */
int main(int ac, char **av)
{
	int a, b, flag, fd, n;
	int leido = 0;
	long int num, num2, m;
	char *buff, *buff2;
	int letters = 100;

	leido = leido;
	ac = ac;
	num = 0;
	fd = open(av[1], O_RDONLY);
	buff = malloc(1000 * sizeof(char));
	buff2 = malloc(120 * sizeof(char));
	leido = read(fd, buff, letters);
 	a = 0;
	while (buff[a] != 0)
	{
		b = 0;
		for (n = 0; n <= 100; n++)
			buff2[n] = 0;
		while (buff[a] != 10)
			 {
				 buff2[b] = buff[a];
				 a++;
				 b++;
			 }
		num = atol(buff2);
		flag = 0;
		for (m = 2; m < num /2 && flag == 0; m++)
		{
			if (num % m == 0)
				flag = 1;
		}
		num2 = num / (m - 1);
		printf("%li=%li*%li\n", num, num2, m - 1);
		a++;
	}
	free(buff);
	free(buff2);
	close(fd);
	return(0);
}
