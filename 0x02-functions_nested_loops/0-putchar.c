#include <unistd.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char bethlehem[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++);
	{
		putchar(bethlehem[c]);

	}
        _putchar('\n');
        return (0);	
}
