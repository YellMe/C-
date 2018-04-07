#include <stdio.h>

int main()
{
	int i, N = 0; //변수 선언

	scanf("%d", &N); // 구구단 몇 단 할지 입력

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N*i); //for문 돌려서 구구단 출력
	}
	return 0;
}