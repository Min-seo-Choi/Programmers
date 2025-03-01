#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_str�� n�� �Ű������� �־��� ��, 
// my_str�� ���� n�� �߶� ������ �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<string> solution(string my_str, int n)
{
	vector<string> answer;

	while (my_str.size() > n)
	{
		answer.emplace_back(my_str.substr(0, n));
		my_str = my_str.substr(n);
	}
	answer.emplace_back(my_str);

	return answer;
}