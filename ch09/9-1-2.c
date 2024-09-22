#include <stdio.h>

double fahrenheit(double cel)
{
	return 1.8 * cel + 32;
}

double celsius(double fah)
{
	return (fah - 32) / 1.8;
}

void transform(int choice)
{
	double deg;

	if (choice == 1)
	{
		printf("섭씨 입력: ");
		scanf("%lf", &deg);
		printf("변환된 화씨: %f\n", fahrenheit(deg));
	}
	else if (choice == 2)
	{
		printf("화씨 입력: ");
		scanf("%lf", &deg);
		printf("변환된 섭씨: %f\n", celsius(deg));
	}
}

int main(void)
{
	int choice;

	printf("섭씨 입력 1, 화씨 입력 2: ");
	scanf("%d", &choice);
	transform(choice);
	return 0;
}
