#include "ft_printf.h"
#include <stdio.h>

int main()
{
   int counter = 0;
   int v;
  
   // ft_putptr(&counter, &counter);
   // printf("\n%p", &counter);


   ft_puthex(-479, 1, &counter);
   printf("\n%X", -479);


   
   
}