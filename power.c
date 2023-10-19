/*Calculate the power of a number
Only accepts postive exponent
Output is subjected to the range of ineger type*/

int	power(int base, int exponent)
{
	int out;

	if (exponent == 0)
		return (1);
	else if (exponent == 1)
		return (base);
	out = base;
	if (exponent > 1)
		return (base * power(base, exponent - 1));
}
