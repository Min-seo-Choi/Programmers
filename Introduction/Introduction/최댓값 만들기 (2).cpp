#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// ���� �迭 numbers�� �Ű������� �־����ϴ�. 
// numbers�� ���� �� �� ���� ���� ���� �� �ִ� �ִ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> numbers)
{
	int num1 = 0, num2 = 0;

	sort(numbers.begin(), numbers.end());

	num1 = numbers[0] * numbers[1];
	num2 = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];

	return max(num1, num2);
}