#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

int main()
{
    int a;
    int b;

    a = 42;
    b = 13;
    ft_swap(&a, &b);
    printf("%d", a);
}