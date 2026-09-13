#include <unistd.h>

void print_digits(void)
{
    char c = '0';

    while(c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}
