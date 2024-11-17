# ifndef FT_PRINTF
#define FT_PRINTF

#include<unistd.h>


void ft_putchar(char c, int *counter);
void ft_putstr(char *str, int *counter);
void ft_putnbr(int i, int *counter);
void ft_puthex(unsigned int u, int cas,int *counter);
void ft_putptr(void *ptr, int *counter);






#endif
