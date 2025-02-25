#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� num�� k�� �Ű������� �־��� ��, 
// num�� �̷�� ���� �߿� k�� ������ num�� �� ���ڰ� �ִ� �ڸ� ���� return�ϰ� ������ -1�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int num, int k)
{
	int answer = 0;
	vector<int> nums;

	while (num > 0)
	{
		int temp = num % 10;
		nums.emplace_back(temp);

		num /= 10;
	}

	reverse(nums.begin(), nums.end());

	if (find(nums.begin(), nums.end(), k) != nums.end())
		answer = distance(nums.begin(), find(nums.begin(), nums.end(), k)) + 1;
	else
		answer = -1;

	return answer;
}