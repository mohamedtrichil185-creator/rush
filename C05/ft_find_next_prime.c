int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while(i < n)
	{
		if (n % i == 0)
			return (0);
	i++;
	}
	return (1);
}

int	ft_find_the_next_prime(int n)
{
	int	nb;
	
	if (is_prime(n))
		n++;
	while(true)
	{
		if (is_prime(n))
			return (n);
	n++;
	}
}

#include<stdio.h>
int main()
{
	printf("%d",ft_find_the_next_prime(7));
}
