#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int Ans_list[n];
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		int b = a;
		int c = a;
		int count = 0;
		do
		{
			b /= 10;
			count += 1;
		} while (b != 0);
		int A[count];
		for (int j = count - 1; j >= 0; j--)
		{
			A[j] = a % 10;
			a /= 10;
		}

		bool check = true;
		int d = 0;
		for (int i = 0; i < count; i++)
		{
			d = A[0] * pow(10, i) + d;
		}

		if (c >= d)
		{
			check = true;
		}
		else
		{
			check = false;
		}

		if (check)
		{
			Ans_list[i] = (9 * (count - 1) + A[0]);
		}
		else
		{
			if (count >= 2)
			{
				Ans_list[i] = (9 * (count - 1) + A[0] - 1);
			}
			else
			{
				Ans_list[i] = A[0];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << Ans_list[i] << endl;
	}
	return 0;
}
