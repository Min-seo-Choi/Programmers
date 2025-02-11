#include <string>
#include <vector>
#include <iostream>

using namespace std;

// �������̶� �� ���� ���ڸ� ������ ���Ͽ� ¦���� ��Ÿ�� ������ (a, b)�� ǥ���մϴ�. 
// �ڿ��� n�� �Ű������� �־��� �� �� ������ ���� n�� �ڿ��� �������� ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n)
{
	vector<int> nums;
	// ��� ���ϱ�
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			nums.emplace_back(i);
			if (i != n / i) nums.emplace_back(n / i);
		}
	}

	return nums.size() % 2 == 0 ? nums.size() / 2 : (nums.size() / 2) + 2;
}

int main()
{
	cout << solution(1000000);
}