#include <stdio.h>

int main()
{
	int C, i, j, N, Y, sum = 0, a[1001], cnt = 0;
	float ave=0;
	scanf("%d", &C); //테스터 C 입력

	for (i = 0; i < C; i++)
	{
		sum = 0; //초기화
		ave = 0; //초기화
		cnt = 0; // 초기화
		scanf("%d", &N); // 학생수 입력
		for (j = 0;  j < N; j++)
		{
			scanf("%d", &a[j]); //점수 입력
			sum = sum + a[j]; //점수 합계
		}
			ave = (float)sum / (float)N; // 변수 변환해주고 평균 

			for (Y = 0; Y < N; Y++)
			{
				if (ave < a[Y]) //점수가 평균보다 클 때 만 출력
					cnt++;
			}

			ave =(float)cnt / (float)N; // 변수 변환 해주고 비율
			printf("%.3f%%\n", ave*100); //소수점 넷째자리에서 반올림해 출력
		

	}
	return 0;
}