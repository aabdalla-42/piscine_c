#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_punbr(int nb)
{
    
    if (nb <0)
    {
        ft_putchar('-');
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
void ft_div_mod (int a,int b, int *div ,int *mod)
{
    *div= (a/b);
    *mod= (a%b);

}
int main ()
{
    int c1;
    int c2;
    int  c3;
    int  c5;
    c1=16;
    c2=12;
    ft_div_mod(c1,c2,&c3,&c5);
    ft_punbr(c3);
    ft_putchar('\n');
    ft_punbr(c5);
    
}
