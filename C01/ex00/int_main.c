#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int f;

	f = 1337;
	ft_ft(&f);
	printf("%d", f);
}
