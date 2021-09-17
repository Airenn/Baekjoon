#include <stdio.h>

int main()
{
	int T = 0;
	long long x, y = 0;
	int i = 0; // 장치 작동 횟수
	long long d = 0; // 현재 남은 거리
	int k = 1; // 처음 이동 가능 거리

	scanf_s("%d", &T);
	while (T > 0)
	{
		scanf_s("%lld %lld", &x, &y);

		d = y - x; // 남은 거리 계산

		while (d / 2 >= k) // 남은 거리가 좌우에서 k만큼 이동하고도 남았을 때
		{
			d -= k * 2; // 남은 거리에서 좌우 이동 거리만큼 뺌
			i += 2; // 좌우 두번 이동했으므로 +2번
			k++; // 이동 거리 증가
		}

		if (d >= 1 && d <= k) // 1. 남은 거리 1 이상 ~ k 이하 : 작동 횟수 1회 필요
			i++;

		else if (d > k) // 2. 남은 거리 k 초과 ~ k * 2 이하 : 작동 횟수 2회 필요
			i += 2;

		printf("%d\n", i);
		i = 0;
		k = 1;
		T--;
	}
}