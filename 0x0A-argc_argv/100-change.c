#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function doing all functions
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int loc, total, change, aux;
int coins[] = {25, 10, 5, 2, 1};

loc = total = change = aux = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]);

if (total <= 0)
{
printf("0\n");
return (0);
}
while (coins[loc] != '\0')
{
if (total >= coins[loc])
{
aux = (total / coins[loc]);
change += aux;
total -= coins[loc] * aux;
}

loc++;
}
printf("%d\n", change);
return (0);
}
