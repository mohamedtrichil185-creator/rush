
void ft_putchar(char c);
void rush(int x,int y)
{
	char *str;
	int i,j;
	
	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while(i < y)
	{
		j = 0;
		while( j < x)
		{
			if ((i == 0 || i == y - 1) && j == 0)
				ft_putchar('A');
			else if ((i == 0 || i == y - 1 ) && j == x - 1)
				ft_putchar('C');
			else if ((i == 0 || i == y - 1 || j==0 || j == x - 1))
				ft_putchar('B');
			else 
				ft_putchar(' ');
			
		j++;	
		}
		if (i < y - 1)
			ft_putchar('\n');
	i++;	
	}
	ft_putchar('\n');
}
