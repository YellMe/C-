#include <stdio.h>

int main()
{
	int i,N ,X, a[10001];
	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i< N; i++)
	{
		if ( a[i] < X )
		{
			printf("%d ", a[i]);
		}	
	}
	return 0;
}