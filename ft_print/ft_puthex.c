#include "ft_printf.h"

void ft_puthex(unsigned int u, int cas,int *counter)
{
   char *base_16;

   if (cas)
      base_16 = "0123456789ABCDEF";
   else  
      base_16 = "0123456789abcdef";
   if (u >= 16)
   {
      ft_puthex(u /16, cas, counter);
   }
   ft_putchar(base_16[u % 16], counter);
}