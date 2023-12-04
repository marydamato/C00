#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{

    char buffer[20];
    int length = sprintf(buffer, "%d", nb);

    write(1, buffer, length);
}

int main(void)
{
    int number = 65;
    ft_putnbr(number);
    return 0;
}