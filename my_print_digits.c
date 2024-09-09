/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** test
*/
int my_print_digits(void)
{
    char test;
    test = 48;
    while (test <= 57)
    {
        my_putchar(test);
        ++test;
    }
    my_putchar('\n');
}


