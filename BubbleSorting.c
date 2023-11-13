void	BubbleSorting(int *tab, int size)
{
	int	i;
	int	j;
	int	storage;

	i = 0;
	j = 1;
	while (i < (size - 1))
	{
		if (tab[i] > tab[j])
		{
			storage = tab[i];
			tab[i] = tab[j];
			tab[j] = storage;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}