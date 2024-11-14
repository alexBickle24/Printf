
#include <stdarg.h>

int  ft_printf(char const *format, ...)
{
	va_list arguments;

	va_start(arguments, format);
	while(*format)
	{
		if (*format == '%')
		{
			ft_cases(*(format + 1));
		}
		format++;
	}
	
}

ft_cases(char type, va_list arguments)
{
	if (type == 'c')
		ft_putchar(va_args(arguments, int));
	else if (type == 's')
		ft_
	else if (type == 'l')

	else if (type == 'p')

	else if (type == 'd')

	else if (type == 'i')

	else if (type == 'u')

	else if (type == 'x')

	else if (type == 'X')

	else if (type == '%')
}