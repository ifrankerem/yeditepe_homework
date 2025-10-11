// 20220201001-072 İrfan Kerem Arslan -HW1

#include <stdio.h>

double	f1(double principal_amount, int rate)
{
	double	SI;

	SI = principal_amount * ((double)rate / 100);
	return (SI);
}

double	f2(double principal_amount, int rate)
{
	double	R2;

	R2 = f1(principal_amount + f1(principal_amount, rate), rate); // R1 = f1(principal_amount,rate);
	return (f1(principal_amount,rate) + R2);
}

double	f3(double principal_amount, int rate)
{
	double	R3;

	R3 = f1(principal_amount + f2(principal_amount, rate), rate); // R1 + R2 = f2(principal_amount,rate);
	return (R3 + f2(principal_amount, rate));
}

int	main(void)
{
	double amount;
	int rate;
	int num_months;
	printf("Please enter the amount: ");
	scanf("%lf", &amount);
	printf("Please enter the rate: ");
	scanf("%d", &rate);
	printf("Please enter the number of months: ");
	scanf("%d", &num_months);
	if (num_months == 1)
		printf("Here is the interest value: %f\n", f1(amount, rate));
	else
	{
		if (num_months == 2)
			printf("Here is the interest value: %f\n", f2(amount, rate));
		else
			printf("Here is the interest value: %f\n", f3(amount, rate));
	}
	return(0);
}