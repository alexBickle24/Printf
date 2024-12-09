/*

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    n = (long long)n;
    if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n >=10)
    {
        ft_putnbr((n / 10));
    }
    ft_putchar(((n % 10) + '0'));
}


//con esta me los imprime alreves
int ft_putnbr_c(int n, int count)
{

    if (n < 0)
    {
        write(1, "-", 1);
        n = n + -1;
        count =+ 1;
    }
    if (n < 10)
    {
        count = count + ft_putchar_c(n + '0');
        return(count);
    }
    else
    {
        count = count + ft_putchar_c(((n % 10) + '0'));
        return(ft_putnbr_c((n / 10), count));
    }
}


void ft_putbase(char *elements, int base, long n, char f)
{
    int i;

    i = 0;
    if (f)
    {
        while(i >= 10 && elements[i] != '\0')
        {
            elements[i] = elements[i] - 32;
            i++;
        }
    }
    if (n < base)
        write(1, &elements[n], 1);
}

void ft_putnbr_base(int n, int base)
{
    n = (long)n;
    if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n <= base)
    {
        ft_putbase("0123456789abcdef", base, (n % 10) + '0', 0);
    }
    else
    {
        ft_putbase("0123456789abcdef", base, n % 10, 0);
        ft_putnbr_base((n / 10), 10);
    }
}
*/
/*
int ft_put_unbr_c(unsigned int n, int count)
{
    int x;

    x = 1;
    while((n / x) >= 10)
        x = x * 10;
    if (n >= 10)//habria que poner base
    {
        count = count + ft_putchar_c((n / x) + 48);
        return(ft_put_unbr_c((n % x), count));
    }
    else
    {
        count = count + ft_putchar_c((n + '0'));
        return(count);
    }
}
*/

///este ocn base no dunciona pero es un de la veriones del putnbr
/*
int ft_put_unbr_base_c(unsigned int n, unsigned int base, int count, char f)
{
    unsigned int x;
    unsigned int y;
    int dif;

    x = 1;
    y = 10;
    while((n / x) >= base)
        x = x * base;
    if (n >= base)
    {
        count = count + ft_putbase_c("0123456789abcdef", base, (n / x), f);
        dif = ((n / x) * y) - (n / (x / y));
        while(!dif && ((n % (x / y)) != 0))
        {
            //haba que meter un if (n % x) == para poder controlar el caso del negativo
            count = count + ft_putbase_c("0123456789abcdef", base, 0, f);
            y = y * base;
            dif = ((n / x) * y) - (n / (x / y));
        
        }
        return(ft_put_unbr_base_c((n % x), base, count, f));
    }
    else
    {
        count = count + ft_putbase_c("0123456789abcdef", base, n, f);
        return(count);
    }
}


int ft_putnbr_c(int n, int count)
{
    int x;
    long temp;

    temp = (long long)n;
    x = 1;
    if (temp < 0)
    {
        count = count + ft_putchar_c('-');
        temp = temp * -1;
    }
    while((temp / x) >= 10)
        x = x * 10;
    if (temp >= 10)
    {
        count = count + ft_putchar_c((temp / x) + 48);
        return(ft_putnbr_c((int)(temp % x), count));
    }
    else
    {
        count = count + ft_putchar_c((temp + '0'));
        return(count);
    }
}
*/