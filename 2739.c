#include <stdio.h>

int main()
{
	int i, N = 0; //���� ����

	scanf("%d", &N); // ������ �� �� ���� �Է�

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N*i); //for�� ������ ������ ���
	}
	return 0;
}