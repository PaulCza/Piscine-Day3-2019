/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** ceci est un test
*/

int my_print_alpha(void)
{
    char test;
       test = 97;
   while (test <= 122)
   {
       my_putchar(test);
       ++test;
   }
   my_putchar('\n');
   return(0);
    }


