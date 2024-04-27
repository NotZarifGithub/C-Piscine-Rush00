void ft_putchar(char c);

void rush(int x, int y)
{
	int row, col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == x)) 
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (row == 1 || row == y || col == 1 || col == x) 
				ft_putchar('*');
			else 
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
		
			
