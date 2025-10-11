// 20220201001-072 İrfan Kerem Arslan -HW2

#include <stdio.h>

int	numeric(char x)
{
	int	number;

	if (x >= '0' && x <= '9') // in ascii if(x >= 48 && x <= 57)
		number = x - '0';	// input is '2' means 50 in ascii 50-48 = 2 and store in int
	else
		return (-1);
	return (number);
}

int	to_Lower(char x)
{
	int	lower;

	if (x >= 'A' && x <= 'Z') // ins ascii if(x >= 65 && x <= 90)
	{
		x = x - 'A'; // we can also do if we know ascii lower = x + 32;
		lower = x + 'a';
	}
	else
		return (0);
	return (lower);
}

int	main(void)
{
	char x;
	printf("Please enter a digit or capital letter: ");
	scanf("%c", &x);
	if (numeric(x) != -1)
		printf("Numeric value of your char is: %d\n", numeric(x));
	else
	{
		if (to_Lower(x) != 0)
			printf("Lowercase equivalent: '%c'\n", to_Lower(x)); // we need to use %c because casting int to char !! (function returns int)
		else
			printf("Neither a digit nor a capital letter!\n");
	}
	return(0);
}