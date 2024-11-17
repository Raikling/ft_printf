#include "ft_printf.h"

void ft_putchar(char c, int *counter)
{
   if (!c)
      return ;
   write (1, &c, 1);
   (*counter)++;
}