#include "ft_printf.h"

void ft_putptr(void *ptr, int *counter)
{
   unsigned int adr;
   if (!ptr)
   {
      ft_putstr("(nil)",counter);
      return ;
   }
   adr = (unsigned long)ptr;
   ft_putstr("0x", counter);
   ft_puthex(adr, 0, counter);
}





