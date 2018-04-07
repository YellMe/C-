#include <stdio.h>

int main()
{
	int i, N, sum;
	sum = 0;
	char a[101];
	
	scanf("%d",&N);

	scanf("%s", a);

	for (i = 0; i < N; i++)
	{
		sum += a[i]- '0';
	}
	printf("%d\n", sum);

	return 0;
}