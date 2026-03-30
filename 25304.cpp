#include <iostream>

using namespace std;


int main()
{
	int TotalCount = { 0, };

	int T = 0;
	int A = 0;
	int B = 0;
	int CompareCount = 0;

	cin >> TotalCount;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> A >> B;
		CompareCount += (A * B);
	}

	if (TotalCount == CompareCount)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}