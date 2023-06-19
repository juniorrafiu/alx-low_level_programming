#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

int main(void)
{
	char *str;
	int len = 0;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	while (*str != '\0')
	{
		len++;
		_putchar(*str++);
	}
	_putchar('\n');
	printf("%d", len);
	return (0);
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}
