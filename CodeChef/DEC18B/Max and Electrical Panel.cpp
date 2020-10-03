#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int N, c;
	cin >> N >> c;
	int r = 0;
	int i;
	int flag = 0;
	int checkloop = 0;
	for (i = 1; 1500 * i <= N; i++)
	{
		checkloop = 1;
		printf("1 %d\n", 1500 * i);
		fflush(stdout);
		scanf("%d", &r);
		if (r == 1)
		{
			flag = 1;
			printf("2\n");
			fflush(stdout);
			break;
		}
	}
	if (!checkloop)
		i = 0;
	int j, jmin, jmax;
	if (!flag)
	{
		i--;
		if (!checkloop)
			i = 0;
		jmin = 1500 * (i) + 15;
		jmax = N;
	}
	else
	{
		jmin = 1500 * (i - 1) + 15;
		jmax = min(1500 * i, N);
	}
	int flag2 = 0;
	for (j = jmin; j <= jmax;)
	{
		printf("1 %d\n", j);
		fflush(stdout);
		scanf("%d", &r);
		if (r == 1)
		{
			printf("2\n");
			fflush(stdout);
			break;
		}
		// if(r==-1)
		// {

		// }
		if (j + 15 <= jmax)
		{
			j += 15;
		}
		else if (!flag2)
		{
			j = jmax;
			flag2 = 1;
		}
		else
		{
			break;
		}
	}
	int k;
	for (k = j - 14; k <= j; k++)
	{
		printf("1 %d\n", k);
		fflush(stdout);
		scanf("%d", &r);
		if (r == 1)
		{
			printf("3 %d\n", k);
			fflush(stdout);
			break;
		}
	}
	return 0;
}