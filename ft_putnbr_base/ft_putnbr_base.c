#include<stdio.h>

int ft_already_seen(char *base)
{
	int  i,j;

	i = 0;
	j = 0;
	while(base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return  (1);
			j++;
		}
		i++;
	}
	return 0;
}

int is_one_char(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	if (i == 1)
		return 0;
	return 1;
}

int is_signed(char *base)
{
	int i;
	i = 0;
	while(base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return 0;
	i++;
	}
	return 1;
}

int  is_the_base_correct(char *base)
{
	int  i;
	i = 0;
	if (ft_already_seen(base))
		return 0;
	else if (!is_one_char(base))
		return 0;
	else if (!is_signed(base))
		return 0;
	else 
		return 1;

}

int	main(void)
{
	ft_putnbr_base(42,"01");

}

void ft_putnbr_base(int nbr,char *base)
{
	if (!is_the_base_correct(base))
		return;
	


}
