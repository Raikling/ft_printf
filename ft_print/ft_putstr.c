#include "ft_printf.h"

void ft_putstr(char *str, int *counter)
{
   if (!*str)
      ft_putstr("NULL", counter);
   while (*str)
   {
      ft_putchar(*str, counter);
      str++;
      (*counter)++;
   }
}