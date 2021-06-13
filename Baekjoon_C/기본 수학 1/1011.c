#include <stdio.h>

int main()
{
	int T = 0;
	int x, y = 0;
	int i = 0; // 장치 작동 횟수
	int d = 0; // 현재 남은 거리
	int k = 1; // 처음 이동 가능 거리 

	scanf_s("%d", &T);
	while (T > 0)
	{
		scanf_s("%d %d", &x, &y);

		d = y - x;

		while (d > 0)
		{
			
			if (d > k)
			{
				d -= k;
				i++;
				if(d - k > 0)
					k++;
			}
			else // d < k
			{
				if (k > 1)
				{
					d -= k - 1;
					i++;
					k--;
				}
				else
				{
					d -= k;
					i++;
				}
			}
		}
		printf("%d\n", i);
		i = 0;
		k = 1;
		T--;
	}
}

/*
1 50 남은거리 49

k1 1 남은거리 48
k2 2 남은거리 46
k3 3 남은거리 43
k4 4 남은거리 39
k5 5 남은거리 34
k6 6 남은거리 28
k7 7 남은거리 21

k8 6 남은거리 15
k9 5 남은거리 10
k10 4 남은거리 6
k11 3 남은거리 3
k12 2 남은거리 1
k13 1 남은거리 0
*/