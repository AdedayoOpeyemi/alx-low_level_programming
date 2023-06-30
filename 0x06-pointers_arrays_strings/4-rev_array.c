/**
 * reverse_array - function to reverses the content of an array of integers.
 *
 * @a: array to be reversed
 * @n: size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while(i <= (n - 1))
		temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;
		i++;
		n--;
}
