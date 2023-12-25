#include "main.h"

/**
 * main - to get minimum change (num of coins needed for change
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0 for success, 1 for failure
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num_passed, num_coins, i;

	num_passed = num_coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num_passed = atoi(argv[1]);

	if (num_passed < 0)
	{
		printf("%d\n", num_coins);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{

		if (num_passed >= coins[i])
		{
			num_coins += num_passed / coins[i];
			if (num_passed % coins[i] == 0)
			{
				printf("%d\n", num_coins);
				return (0);

			}
			num_passed = num_passed % coins[i];
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
