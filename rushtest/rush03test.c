void ft_putchar();

void    rush (int a, int b)
{
	int    sutun;
	int    satir;
	satir = 1;
	while (satir <= b && a > 0)
	{
		sutun = 1;
		while (sutun <= a)
		{
			if ((sutun == 1 && satir == 1) || (sutun == 1 && satir == b))
				ft_putchar('A');
			else if ((satir == 1 && sutun == a) || (satir == b && sutun == a))
				ft_putchar('C');
			else if ((sutun == 1) || (sutun == a) || (satir == 1) || (satir == b))
				ft_putchar('B');
			else
				ft_putchar(' ');
			sutun++;
		}
		ft_putchar('\n');
		satir++;
   	}
}
