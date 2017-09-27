#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1;
    int num2;
	printf("Enter two intergers,and I will tell you\n");
	printf("the relationship they staisfy");

	scanf("%d%d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d is equal to %d\n", num1, num2);
	}

	if (num1 != num2)
	{
		printf("%d is not equal to %d\n", num1, num2);
	}

	if (num1 < num2)
	{
		printf("%d is greater then %d\n", num2, num1);
	}

	if (num1 > num2)
	{
		printf("%d is less then %d\n", num2, num1);
	}

	if (num1 <= num2)
	{
		printf("%d is less or equal %d\n", num1, num2);
	}

	if (num1 >= num2)
	{
		printf("%d is greater or equal %d\n", num1, num2);
	}

	system("pause");
	return 0;
}