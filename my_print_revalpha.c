/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** ceci est un test
*/

int my_print_revalpha(void)
{
    char test;
    test = 122;
    while (test >= 97)
    {
        my_putchar(test);
        --test;
    }
    my_putchar('\n');
}
