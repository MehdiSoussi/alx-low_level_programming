#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Description: [P214T]
 *     *
 *      * Return: Always 0 (Success)
 *       */

int main() {
	int n=0, n1=0, n2=1;

	while (1 == 1)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if(n <= 50)
		{
			if(n1+n2 > 50){
				printf("%d", n);
			}
			else{
				printf("%d, ", n);
			}
		}
		else
		{
			break;
		}
	}
	return (0);
}
