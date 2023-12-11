/**
 * add - Adds two integers.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return: the sum
 * Description:
 * The add function takes two integers as parameters and returns their sum.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return: the result of subtraction
 * Description:
 * The sub function takes two integers and returns their difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 *
 * @a: The first integer.
 * @b: The second integer.
 * Return: the multiplied value
 * Description:
 * The mul function takes two integers as parameters and returns their product.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 *
 * @a: The dividend.
 * @b: The divisor.
 * Return: The result of the division.
 */

int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the modulus of two integers.
 *
 * @a: The dividend.
 * @b: The divisor.
 * Return: The remainder.
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
