#include "stdlib.h"
#include "stdio.h"
void howmanycoins(int *cents, int *min_coins, int coin_type);
/**
 * main - entrypoint
 * @argc: Parametre 1
 * @argv: Parametre 2
 *
 * Description: [T5]
 *
 * Return: Return value
 */
int main(int argc, char **argv)
{
int cents, min_coins;
int possible_coins[] = {25, 10, 5, 2, 1};
int i;

if (argc != 2)
{
printf("Error\n");
return (0);
}
cents = atoi(argv[1]);
min_coins = 0;
if (cents <= 0)
{
printf("0\n");
return (1);
}
else
{
for (i = 0; i < 5; i++)
{
howmanycoins(&cents, &min_coins, possible_coins[i]);
}
printf("%d\n", min_coins);
}
return (1);
}
/**
 * howmanycoins - entrypoint
 * @cents: Parametre 1
 * @min_coins: Parametre 2
 * @coin_type: Parametre 3
 *
 * Description: [T5]
 *
 * Return: Return value
 */
void howmanycoins(int *cents, int *min_coins, int coin_type)
{
int r = *cents / coin_type;

if (r != 0)
{
*min_coins += r;
*cents -= r * coin_type;
}
}
