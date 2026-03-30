#include<iostream>

using namespace std;

int main()
{
	int num = 0;

	std::cin >> num;

	for (int i = 1; i < 10; ++i)
	{
		cout << num << " * " << i << " = ";
		cout << num * i << endl;
	}

	return 0;
}