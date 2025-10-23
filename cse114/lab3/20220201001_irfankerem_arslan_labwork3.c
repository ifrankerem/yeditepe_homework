/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void	welcome(void)
{
	printf("Welcome to the Pattern Drawing Machine! By using this machine you can do:\n1. Draw Palindrome Shapes\n2. Check Palindrome Shape (6 input)\n3. Draw a point on XY plane\n4. Display Pascal Triangle\n5. Exit\nMake your choice: ");
}

static int	ft_linefinder(int x)
{
	return((x - 1) / 2);
}

void	draw_palindrome(void)
{
	int	input;
	int	i;
	int	j;
	int	row_nbr;
	int	space;
	int	s;
	int	p_char;

	i = 0;
	j = 0;
	printf("Enter the base:");
	scanf("%d", &input);
	if (input % 2 == 0)
	{
		printf("Please enter an odd number!");
		return ;
	}
	row_nbr = ft_linefinder(input);
	while (j <= row_nbr)
	{
		i = 0;
		space = row_nbr - j;
		s = 0;
		while (s < space)
		{
			printf(" ");
			s++;
		}
		p_char = 2 * j + 1;
		while (i < p_char)
		{
			if (i == p_char / 2)
				printf("*");
			else if (i % 2 == 0)
				printf("@");
			else
				printf("+");
			i++;
		}
		j++;
		printf("\n");
	}
	return;
}

void	check_palindrome(void)
{
	int		i;
	char	x[7]; //max 6 input

	i = 0;
	printf("Enter the shape: ");
	scanf("%s", x);
	while (i <= 3)
	{
		if (x[i] != x[5 - i])
		{
			printf("It is not a palindrome shape!\n");
			return ;
		}
		i++;
	}
	printf("It is a palindrome shape!\n");
	return ;
}

void	draw_point(void)
{
	int	row;
	int	column;
	int	x;
	int	y;
	int	i;

	printf("enter x and y coordinates: ");
	scanf("%d", &x);
	scanf("%d", &y);
	row = 9;
	column = 0;
	while (row > 0)
	{
		printf("|");
		if (row == y)
		{
			i = 0;
			while (i < x * 2)
			{
				printf(" ");
				i++;
			}
			printf("*");
		}
		printf("\n");
		row--;
	}
	printf(" ");
	while (column <= 9)
	{
		if (y == 0 && column == x)
			printf("*");
		else
			printf("_");
		if (column < 9)
			printf(" ");
		column++;
	}
	printf(" x\n");
	return;
}

void	pascal(void)
{
	int	input;
	int	row;
	int	value;
	int	index;
	int	row_nbr;
	int	space;

	printf("Enter the base:");
	scanf("%d", &input);
	if (input % 2 == 1)
	{
		printf("it cannot be drawn since the base is odd!\n");
		return ;
	}
	row = 0;
	while (row < input)
	{
		space = 0;
		while (space < input - row - 1)
		{
			printf(" ");
			space++;
		}
		index = 0;
		value = 1; // always start with 1
		while (index <= row)
		{
			if (value % 2 == 1)
				printf("* ");
			else
				printf("  ");
			value = value * (row - index) / (index + 1); // pascal algorithm
			index++;
		}
		printf("\n");
		row++;
	}
	return;
}

int	main(void)
{
	int input = -1;
	welcome();
	while (input != 5)
	{
		scanf("%d", &input);
		if (input == 1)
			draw_palindrome();
		else if (input == 2)
			check_palindrome();
		else if (input == 3)
			draw_point();
		else if(input == 4)
			pascal();
		else if (input == 5)
			break ;
		else
			printf("Please enter a valid option!\n");
		welcome();
	}
	return (0);
}