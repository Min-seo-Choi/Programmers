#include <string>
#include <vector>

using namespace std;

// ���� �迭 numbers�� ���� num1, num2�� �Ű������� �־��� ��, 
// numbers�� num1�� ° �ε������� num2��° �ε������� �ڸ� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

vector<int> solution(vector<int> numbers, int num1, int num2)
{
	vector<int> answer;
	answer.assign(numbers.begin() + num1, numbers.begin() + num2 + 1);

	return answer;
}