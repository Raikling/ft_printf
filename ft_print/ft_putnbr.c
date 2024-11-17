#include "ft_printf.h"

void ft_putnbr(int i, int *counter)
{
   if (i == -2147483648)
   {
      write(1, "-2147483648", 11);
      // (*counter) += 11;
   }
   if (i < 0)
   {
      ft_putchar('-', counter);
      i = -i;
   }
   if (i > 9)
   {
      ft_putnbr(i / 10, counter);
   }
   ft_putchar(i % 10 + '0', counter);

}
