#include <string>
#include <vector>

using namespace std;

// ���� n�� �Ű������� �־��� ��, n�� ����� ������������ ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) answer.emplace_back(i);
    }

    return answer;
}