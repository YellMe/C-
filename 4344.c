#include <stdio.h>

int main()
{
	int C, i, j, N, Y, sum = 0, a[1001], cnt = 0;
	float ave=0;
	scanf("%d", &C); //�׽��� C �Է�

	for (i = 0; i < C; i++)
	{
		sum = 0; //�ʱ�ȭ
		ave = 0; //�ʱ�ȭ
		cnt = 0; // �ʱ�ȭ
		scanf("%d", &N); // �л��� �Է�
		for (j = 0;  j < N; j++)
		{
			scanf("%d", &a[j]); //���� �Է�
			sum = sum + a[j]; //���� �հ�
		}
			ave = (float)sum / (float)N; // ���� ��ȯ���ְ� ��� 

			for (Y = 0; Y < N; Y++)
			{
				if (ave < a[Y]) //������ ��պ��� Ŭ �� �� ���
					cnt++;
			}

			ave =(float)cnt / (float)N; // ���� ��ȯ ���ְ� ����
			printf("%.3f%%\n", ave*100); //�Ҽ��� ��°�ڸ����� �ݿø��� ���
		

	}
	return 0;
}