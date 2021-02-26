#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds and prints sum of positive numbers
  *followed by a new line.
  *@argc: number of arguments passed.
  *@argv: pointer to array of size argc, containing
  *arguments passed.
  *
  *Return: 0 on success.
  *1 on error.
  */
int main(int argc, char *argv[])
{
	int count, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]))
			{
				sum += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
