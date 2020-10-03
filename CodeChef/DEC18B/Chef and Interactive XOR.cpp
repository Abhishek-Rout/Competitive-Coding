#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	unsigned int n;
	long long int x[50005];
	long long int a[50005];
	int ans;
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 1; i + 7 <= n; i = i + 4)
		{
			printf("1 %d %d %d\n", i, i + 1, i + 2);
			fflush(stdout);
			scanf("%lld", &x[i]);
			if (x[i] == -1)
				return 0;
			printf("1 %d %d %d\n", i + 1, i + 2, i + 3);
			fflush(stdout);
			scanf("%lld", &x[i + 1]);
			printf("1 %d %d %d\n", i + 2, i + 3, i);
			fflush(stdout);
			scanf("%lld", &x[i + 2]);
			printf("1 %d %d %d\n", i + 3, i, i + 1);
			fflush(stdout);
			scanf("%lld", &x[i + 3]);
			a[i] = x[i] ^ x[i + 2] ^ x[i + 3];
			a[i + 1] = x[i] ^ x[i + 1] ^ x[i + 3];
			a[i + 2] = x[i + 2] ^ x[i] ^ x[i + 1];
			a[i + 3] = x[i + 3] ^ x[i + 2] ^ x[i + 1];
		}
		if (!(n % 4))
		{
			//Repeat above process for n-3,n-2,n-1,nth indices
			printf("1 %d %d %d\n", n - 3, n - 2, n - 1);
			fflush(stdout);
			scanf("%lld", &x[n - 3]);
			printf("1 %d %d %d\n", n - 2, n - 1, n);
			fflush(stdout);
			scanf("%lld", &x[n - 2]);
			printf("1 %d %d %d\n", n - 1, n, n - 3);
			fflush(stdout);
			scanf("%lld", &x[n - 1]);
			printf("1 %d %d %d\n", n, n - 3, n - 2);
			fflush(stdout);
			scanf("%lld", &x[n]);
			a[n] = x[n] ^ x[n - 1] ^ x[n - 2];
			a[n - 1] = x[n - 3] ^ x[n - 2] ^ x[n - 1];
			a[n - 2] = x[n - 2] ^ x[n - 3] ^ x[n];
			a[n - 3] = x[n] ^ x[n - 1] ^ x[n - 3];
		}
		else if (n % 4 == 1)
		{
			//n-4, n-3, n-2, n-1, nth terms
			for (int i = n - 4; i <= n - 2; i++)
			{
				printf("1 %d %d %d\n", i, i + 1, i + 2);
				fflush(stdout);
				scanf("%lld", &x[i]);
			}
			printf("1 %d %d %d\n", n - 1, n, n - 4);
			fflush(stdout);
			scanf("%lld", &x[n - 1]);
			printf("1 %d %d %d\n", n, n - 4, n - 3);
			fflush(stdout);
			scanf("%lld", &x[n]);
			a[n] = x[n - 4] ^ x[n - 3] ^ x[n - 1];
			a[n - 1] = x[n] ^ x[n - 4] ^ x[n - 2];
			a[n - 2] = x[n - 1] ^ x[n] ^ x[n - 3];
			a[n - 3] = x[n - 2] ^ x[n - 4] ^ x[n - 1];
			a[n - 4] = x[n - 3] ^ x[n - 2] ^ x[n];
		}
		else if (n % 4 == 2)
		{
			//(n-5) to n
			printf("1 %d %d %d\n", n - 5, n - 4, n - 2);
			fflush(stdout);
			scanf("%lld", &x[n - 5]);
			printf("1 %d %d %d\n", n - 4, n - 3, n - 1);
			fflush(stdout);
			scanf("%lld", &x[n - 4]);
			printf("1   %d %d %d\n", n - 3, n - 2, n);
			fflush(stdout);
			scanf("%lld", &x[n - 3]);
			printf("1 %d %d %d\n", n - 2, n - 1, n - 5);
			fflush(stdout);
			scanf("%lld", &x[n - 2]);
			printf("1 %d %d %d\n", n - 1, n, n - 4);
			fflush(stdout);
			scanf("%lld", &x[n - 1]);
			printf("1 %d %d %d\n", n, n - 5, n - 3);
			fflush(stdout);
			scanf("%lld", &x[n]);
			a[n] = x[n - 5] ^ x[n - 2] ^ x[n - 1];
			a[n - 1] = x[n] ^ x[n - 3] ^ x[n - 2];
			a[n - 2] = x[n - 4] ^ x[n - 3] ^ x[n - 1];
			a[n - 3] = x[n - 5] ^ x[n - 4] ^ x[n - 2];
			a[n - 4] = x[n - 5] ^ x[n - 3] ^ x[n];
			a[n - 5] = x[n - 4] ^ x[n - 1] ^ x[n];
		}
		else
		{
			int z;
			printf("1 %d %d %d\n", n - 6, n - 4, n - 2);
			fflush(stdout);
			scanf("%lld", &x[n - 6]);
			printf("1 %d %d %d\n", n - 6, n - 4, n - 1);
			fflush(stdout);
			scanf("%lld", &x[n - 5]);
			printf("1 %d %d %d\n", n - 6, n - 3, n - 1);
			fflush(stdout);
			scanf("%lld", &x[n - 4]);
			printf("1 %d %d %d\n", n - 5, n - 3, n - 1);
			fflush(stdout);
			scanf("%lld", &x[n - 3]);
			printf("1 %d %d %d\n", n - 5, n - 3, n);
			fflush(stdout);
			scanf("%lld", &x[n - 2]);
			printf("1 %d %d %d\n", n - 5, n - 2, n);
			fflush(stdout);
			scanf("%lld", &x[n - 1]);
			printf("1 %d %d %d\n", n - 4, n - 2, n);
			fflush(stdout);
			scanf("%lld", &x[n]);

			z = x[n - 6] ^ x[n - 5] ^ x[n - 4] ^ x[n - 3] ^ x[n - 2] ^ x[n - 1] ^ x[n];
			a[n] = x[n - 6] ^ x[n - 3] ^ z;
			a[n - 6] = x[n - 3] ^ x[n] ^ z;
			a[n - 5] = x[n] ^ x[n - 4] ^ z;
			a[n - 4] = z ^ x[n - 4] ^ x[n - 1];
			a[n - 3] = z ^ x[n - 5] ^ x[n - 1];
			a[n - 2] = z ^ x[n - 5] ^ x[n - 2];
			a[n - 1] = z ^ x[n - 6] ^ x[n - 2];
		}
		printf("2 ");
		for (int i = 1; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("%d\n", a[n]);
		fflush(stdout);
		scanf("%d", &ans);
		if (ans == -1)
		{
			break;
		}
		ans = 0;
	}
	return 0;
}