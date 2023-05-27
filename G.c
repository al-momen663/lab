#include <stdio.h>

int main()
{
	int T, N, count = 0;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &N);
		count++;
		if ((N % 3 == 0) && (N / N == 1))
		{
			printf("Case %d : %d\n", count, N);
		}
		else
		{
			printf("Case %d : %d\n", count, N * 3);
		}
	}

	return 0;
}