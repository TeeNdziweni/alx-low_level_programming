#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return sum of all parameters
 * @n: the number of parameters passed to function
 * @...: a variable number of parameters to calculate sum of
 *
 * Return: if n == 0 - 0
 * else - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int v, sum = 0;

	va_start(ap, n);

	for (v = 0; v < n; v++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
