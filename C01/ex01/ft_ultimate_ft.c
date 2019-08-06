#include <unistd.h>
void ft_putchar(int a)
{
    write (1,&a,1);
}
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr =42;

}

void    ft_punbr(int nb)
{

		if (nb <0)
{    ft_putchar('-');
	nb=-nb;
	}
	if (nb>=10)
	{
	ft_punbr(nb / 10);
ft_punbr(nb % 10);
}
   else
{
 ft_putchar(nb +'0');
}
}
int main (void)
{
    int ptr;
    int    *ptr0 =&ptr;
    int    **ptr1=&ptr0;
    int    ***ptr2=&ptr1;
    int    ****ptr3=&ptr2;
    int    *****ptr4=&ptr3;
    int    ******ptr5=&ptr4;
    int    *******ptr6=&ptr5;
    int    ********ptr7=&ptr6;
    int    *********ptr8=&ptr7;
    ft_ultimate_ft(ptr8);
    ft_punbr(*********ptr8);
}
